#include "main.h"

void addItem(Item*& library, size_t& size, Item item)
{
	Item* tmp = new Item[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = library[i];
	}
	tmp[size] = item;
	size++;
	delete[] library;
	library = tmp;
}

string getType(Type type)
{
	switch (type)
	{
	case BOOK:
		return "Book";
	case NEWSPAPER:
		return "Newspaper";
	case MAGAZINE:
		return "Magazine";
	}
}

void fillLibrary(Item*& library, size_t& size, const size_t& count)
{
	for (size_t i = 0; i < count; i++)
	{
		Item tmp;
		editItem(tmp);
		addItem(library, size, tmp);
	}
}

void editItem(Item& item)
{
	int type;
	while (true) {
		cout << R"(	
			Select type : 
					1 - Book;
					2 - Newspaper;
					3 = Magazine;
					Enter :: )";
		cin >> type;
		if (type < 1 or type > 3)
		{
			cout << "error type. try again.";
		}
		else {
			break;
		}
	}
	cin.clear();
	cin.ignore();

	cout << R"(
			Enter name : )";
	cin.getline(item.name, SIZE);
	cout << R"(
			Enter year : )";
	cin >> item.year;
	cin.clear();
	cin.ignore();
	switch (type)
	{
	case Type::BOOK:
		item.type = Type::BOOK;
		cout << R"(
			Enter author : )";
		cin.getline(item.author, SIZE);
		cout << R"(
			Enter genre : )";
		cin.getline(item.genre, SIZE);
		break;
	case Type::NEWSPAPER:
		item.type = Type::NEWSPAPER;
		break;
	case Type::MAGAZINE:
		item.type = Type::MAGAZINE;
		break;
	}


}

void deleteItem(Item*& library, size_t& size, const size_t& index)
{
	Item* tmp = new Item[--size];
	for (size_t i = 0; i < size; i++)
	{
		if (i < index) {
			tmp[i] = library[i];
		}
		else {
			tmp[i] = library[i + 1];
		}
	}
	delete[] library;
	library = tmp;
}

void print(Item item)
{
	cout << "================== " << getType(item.type) << " =====================" << endl;
	cout << "\t\t Title     :: " << item.name << endl;
	if (item.type == Type::BOOK) {
		cout << "\t\t Author    :: " << item.author << endl;
		cout << "\t\t Genre     :: " << item.genre << endl;
	}
	cout << "\t\t Year      :: " << item.year << endl;
}

void read(Item*& library, size_t& size)
{
	ifstream file(path);
	if (!file.is_open())
		return;

	file.seekg(0, ios_base::end);
	size = file.tellg() / sizeof(Item);
	file.seekg(0, ios_base::beg);

	library = new Item[size];
	for (size_t i = 0; i < size; i++)
	{
		file.read((char*)&library[i], sizeof(Item));
	}
	file.close();
}

void save(Item*& library, size_t& size)
{
	fstream file(path, ios_base::out | ios_base::binary);
	if (!file.is_open())
	{
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		file.write((char*)&library[i], sizeof(Item));
	}
	file.close();
}
