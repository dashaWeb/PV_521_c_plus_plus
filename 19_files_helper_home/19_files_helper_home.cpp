#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
			ofstream --> write (cout)
			ifstream --> read (cin)
			fstream --> read, write
		*/

string secretText(const string& str, const size_t& key)
{
	string secret = "";
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i])) {
			secret += str[i];
			continue;
		}
		if (islower(str[i])) {
			// 97 - 122
			// key = 3
			// 120 + 3 => 123
			char s = str[i] + key;
			if (s > 122) {
				s = 96 + (s - 122);
			}
			secret += s;
			continue;
		}

		if (isupper(str[i])) {
			// 65 - 90
			// key = 3
			// 120 + 3 => 123
			char s = str[i] + key;
			if (s > 90) {
				s = 64 + (s - 90);
			}
			secret += s;
		}
	}
	return secret;
}

int main()
{
	/*Шифр Цезаря — один із найдавніших шифрів.Під час шифрування кожен символ замінюється іншим, віддаленим від нього в алфавіті на фіксоване число позицій.
		Приклад
		Шифрування з використанням ключа : 3
		Оригінальний текст : Съешь же ещё этих мягких французских булок, да выпей чаю.
		Шифрований текст : Фэзыя йз зьи ахлш пвёнлш чугрщцкфнлш дцосн, жг еютзм ъгб.
		Дано текстовий файл.Зашифрувати його, використовуючи шифр Цезаря.Результат записати в інший файл.*/

	string fname = "text.txt";
	fstream file(fname, ios_base::in);
	if (!file.is_open())
	{
		cout << "Error! File not found" << endl;
		return 0;
	}

	string all_text = "";
	string text = "";
	while (getline(file, text))
	{
		all_text += text + "\n";
	}
	cout << all_text << endl;
	file.close();

	file.open("secret.txt", ios_base::out);
	if (!file.is_open())
	{
		cout << "Error! File not found" << endl;
		return 0;
	}
	file << secretText(all_text,3);
	file.close();
}

