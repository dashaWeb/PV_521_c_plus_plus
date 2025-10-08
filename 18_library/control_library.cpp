#include "control_library.h"

void printBook(const Book& book)
{
	cout << "\t\t Title     :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void printBooks(const Book* library, const size_t& size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "\n\n \t==================== Book #" << i + 1 << " =================" << endl;
		printBook(library[i]);
	}
}

void editBook(Book& book)
{
	cout << "\t\t Title     :: "; getline(cin,book.name);
	cout << "\t\t Author    :: "; getline(cin,book.author);
	cout << "\t\t Publisher :: "; getline(cin,book.publisher);
	cout << "\t\t Genre     :: "; getline(cin,book.genre);
}

int searchByAuthor(const Book* library, const size_t& size, const string& author, const int& index)
{
	for (size_t i = index; i < size; i++)
	{
		if (toLower(library[i].author) == toLower(author)) {
			return i;
		}
	}
	return -1;
}

string toLower(const string& str)
{
	string copy = str;
	for (size_t i = 0; i < copy.size(); i++)
	{
		copy[i] = tolower(copy[i]);
	}
	return copy;
}

void sortByTitle(Book* library, const size_t& size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (toLower(library[j].name) > toLower(library[j + 1].name)) {
				swap(library[j], library[j + 1]);
			}
		}
	}
}

void addBook(Book*& library, int& size, Book book)
{
	Book* tmp = new Book[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = library[i];
	}
	tmp[size] = book;
	size++;
	delete[] library;
	library = tmp;
}

void removeBook(Book*& library, int& size, const int id)
{
	Book* tmp = new Book[--size];
	for (size_t i = 0; i < size; i++)
	{
		if (i < id) {
			tmp[i] = library[i];
		}
		else {
			tmp[i] = library[i + 1];
		}
	}
	delete[] library;
	library = tmp;
}
