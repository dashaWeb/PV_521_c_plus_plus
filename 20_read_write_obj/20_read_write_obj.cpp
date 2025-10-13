#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const size_t SIZE = 50;
struct Book
{
	char name[SIZE]{};
	char author[SIZE]{};
	char publisher[SIZE]{};
	char genre[SIZE]{};
};

void printBook(const Book& book)
{
	cout << "\t\t Title     :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

int main()
{
	//Book book = { "Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy" };
	//cout << sizeof(book) << endl;
	////Запис у файл структури
	//fstream file("data.txt", ios_base::out); // створили файловий потік і пов'язали з файлом та налаштували режим на запис
	//if (!file.is_open())
	//{
	//	cout << "File not found" << endl;
	//	return 0;
	//}
	////file << book; // Error
	//file.write((char*)&book, sizeof(book));
	//file.close();

	// Читання з файл структури
	//fstream file("data.txt", ios_base::in); // створили файловий потік і пов'язали з файлом та налаштували режим на читання
	//if (!file.is_open())
	//{
	//	cout << "File not found" << endl;
	//	return 0;
	//}
	//Book res;
	///*file >> res;*/
	//
	//file.read((char*)&res, sizeof(Book));
	//file.close();

	//printBook(res);

	/////////////////////////////////////////
	// запис у файл масиву книг
	/*int size = 10;
	Book* library = new Book[size]
		{
			{"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
			{"The Ever King","LJ Andrews","Victorious","Fantasy"},
			{"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Chamber of Secrets","J.K. rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Prisoner of Azkaban","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Order of the Phoenix","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Harry Potter and the Half-Blood Prince","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
			{"Crown of Blood and Ruin","LJ Andrews","Victorious","Dark Fantasy Horror"},
			{"battlefield Reclaimer","David North","High Peak Publishing","Fiction"},
			{"Swords of Empire","Robert Ryan","Trotting Fox Press","Fantasy"},
		};
		fstream file("data.txt", ios_base::out);
		if (!file.is_open())
		{
			cout << "File not found" << endl;
			return 0;
		}
		for (size_t i = 0; i < size; i++)
		{
			file.write((char*)&library[i], sizeof(Book));
		}
		file.close();*/


		// читання з файлу книг у масив
		/*fstream file("data.txt", ios_base::in);
		if (!file.is_open())
		{
			cout << "File not found" << endl;
			return 0;
		}
		cout << file.tellg() << endl;
		file.seekg(0, ios_base::end);
		cout << file.tellg() << endl;
		int size = file.tellg() / sizeof(Book);
		cout << "Number of books :: " << size << endl;

		file.seekg(0, ios_base::beg);
		cout << file.tellg() << endl;

		Book* res = new Book[size];
		for (size_t i = 0; i < size; i++)
		{
			file.read((char*)&res[i], sizeof(Book));
		}
		file.close();
		for (size_t i = 0; i < size; i++)
		{
			printBook(res[i]);
			cout << endl;
		}*/

		//remove("text.txt");
		/*fstream file("text.txt", ios_base::out | ios_base::in | ios_base::app);
		if (!file.is_open())
		{
			cout << "File not found" << endl;
			return 0;
		}
		string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque aliquam augue enim, eu efficitur nisi blandit id. Nullam venenatis, leo gravida consequat convallis, erat nunc feugiat odio, id finibus erat urna eu lectus. Cras turpis nibh, fringilla eu erat a, facilisis gravida orci. Phasellus vestibulum neque quis sem interdum, vitae ornare libero tristique. Pellentesque hendrerit at turpis eget venenatis. Integer in tortor vulputate, tempor ipsum vel, pretium neque. Nulla sodales, justo maximus pulvinar commodo, lacus neque elementum lectus, sed semper mi turpis eu purus. Pellentesque sodales eu quam sit amet pellentesque. Suspendisse commodo sit amet felis vel vulputate. Nullam sed orci eu elit maximus vulputate sed ac mauris. Pellentesque sed est quis lorem cursus bibendum. Duis varius quam ac nibh facilisis, ac dictum nulla dictum.\n";

		file << text;

		file.seekg(0);

		string all_text = "";
		while (getline(file, text))
		{
			all_text += text + "\n";
		}
		cout << "Result " << all_text << endl;*/

	fstream file("text.dat", ios_base::out | ios_base::in | ios_base::app | ios_base::binary);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
		return 0;
	}
	string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque aliquam augue enim, eu efficitur nisi blandit id. Nullam venenatis, leo gravida consequat convallis, erat nunc feugiat odio, id finibus erat urna eu lectus. Cras turpis nibh, fringilla eu erat a, facilisis gravida orci. Phasellus vestibulum neque quis sem interdum, vitae ornare libero tristique. Pellentesque hendrerit at turpis eget venenatis. Integer in tortor vulputate, tempor ipsum vel, pretium neque. Nulla sodales, justo maximus pulvinar commodo, lacus neque elementum lectus, sed semper mi turpis eu purus. Pellentesque sodales eu quam sit amet pellentesque. Suspendisse commodo sit amet felis vel vulputate. Nullam sed orci eu elit maximus vulputate sed ac mauris. Pellentesque sed est quis lorem cursus bibendum. Duis varius quam ac nibh facilisis, ac dictum nulla dictum.\n";

	file << text;

	file.seekg(0);

	string all_text = "";
	while (getline(file, text))
	{
		all_text += text + "\n";
	}
	cout << "Result " << all_text << endl;

}
