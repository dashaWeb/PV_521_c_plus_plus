#include <iostream>
#include <fstream> // read, write
#include <string>
using namespace std;

int main()
{
	/*
		ofstream --> write (cout)
		ifstream --> read (cin)
		fstream --> read, write
	*/


	// write file
	/*string line = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	string fname = "my.txt";

	cout << "Length line :: " << line.size() << endl;*/

	/*ofstream file;

	file.open(fname, ios_base::app);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else {
		cout << "Enter line :: ";
		getline(cin, line);
		file << line << endl;
	}
	file.close();*/

	// write file numbers
	//string fname = R"(C:\Users\konopelko\Desktop\number.txt)";
   /* string fname = R"(number.txt)";
	ofstream file(fname, ios_base::app);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else {
		int number;
		while (cin >> number)
		{
			file << number << endl;
		}
	}
	file.close();*/


	// read
	/*string fname = R"(number.txt)";
	ifstream file(fname);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else {
		int number;
		while (!file.eof())
		{
			file >> number;
			cout << "Read number :: " << number << endl;
		}
	}*/
	string fname = "my.txt";
	ifstream file(fname);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else {
		// read word
		string line;
		/*while (!file.eof())
		{
			file >> line;
			cout << "Read line :: " << line << endl;
		}*/
		cout << "\n\n Read Words :: " << endl;
		cout << "Start read :: " << file.tellg() << endl;
		while (file >> line)
		{
			cout << "Read line :: " << line << endl;
			//cout << "" << file.tellg() << endl;
		}
		cout << "End   read :: " << file.tellg() << endl;


		// read line
		file.clear();
		file.seekg(0);
		cout << "\n\n Read Lines :: " << endl;
		cout << "Start read :: " << file.tellg() << endl;

		while (getline(file, line))
		{
			cout << "Read line :: " << line << endl;
		}

		file.clear();
		file.seekg(0);
		cout << "\n\n Read Symbols :: " << endl;
		cout << "Start read :: " << file.tellg() << endl;
		char s;
		while (file.get(s))
		{
			cout << "Read symbol :: " << s << endl;
		}

		file.clear();
		file.seekg(0);
		cout << "\n\n Read Words in char[] :: " << endl;
		cout << "Start read :: " << file.tellg() << endl;
		char words[100];
		while (file >> words)
		{
			cout << "Read symbol :: " << words << endl;
		}

		file.clear();
		file.seekg(0);
		cout << "\n\n Read Lines in char[] :: " << endl;
		cout << "Start read :: " << file.tellg() << endl;
		/*char words[100];*/
		while (file.getline(words, 100))
		{
			cout << "Read symbol :: " << words << endl;
		}
		file.close();
		/// save lines in arrays
	}
	file.open(fname);
	if (!file.is_open())
	{
		cout << "File not found" << endl;
	}
	else {
		int counter = 0;
		string str;
		while (getline(file, str))
		{
			counter++;
		}
		cout << "Number of lines :: " << counter << endl;

		string* lines = new string[counter];
		file.clear();
		file.seekg(0);
		counter = 0;
		while (getline(file, lines[counter]))
		{
			counter++;
		}
		file.close();

		for (size_t i = 0; i < counter; i++)
		{
			cout << "#" << i + 1 << " :: " << lines[i] << endl;
		}

	}
}
