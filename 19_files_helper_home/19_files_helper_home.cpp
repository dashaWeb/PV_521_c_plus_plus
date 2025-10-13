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
	/*���� ������ � ���� �� ���������� �����.ϳ� ��� ���������� ����� ������ ���������� �����, ��������� �� ����� � ������ �� ��������� ����� �������.
		�������
		���������� � ������������� ����� : 3
		����������� ����� : ����� �� ��� ���� ������ ����������� �����, �� ����� ���.
		���������� ����� : ����� �� ��� ���� ����� ����������� �����, �� ����� ���.
		���� ��������� ����.����������� ����, �������������� ���� ������.��������� �������� � ����� ����.*/

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

