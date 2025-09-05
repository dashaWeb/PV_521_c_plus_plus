#include <iostream>
using namespace std;

enum colors {
	EXIT, RED = 1, GREEN, YELLOW, AQUA, PURPLE
};


int main()
{
	/*
		while(){}
		do{}while()
		for(start, end, step){}
	*/


	/*  int i = 0;
	  while (i < 10)
	  {
		  cout << ++i << "\t";
	  }
	  cout << endl;

	  while (true)
	  {

	  }*/

	/*int res;
	do
	{
		cout << "2 + 2 = ";
		cin >> res;
	} while (res != 4);

	cout << "Congratulation" << endl;*/
	/*size_t i = 0;
	for (;;)
	{
		i++;
		cout << i << "\t";
		if (i == 10)
			break;
	}
	cout << endl;
	cout << i << endl;*/

	/*for (size_t i = 1; i <= 20; i++)
	{
		if (i % 3 == 0)
			continue;

		cout << i << "\t";
	}
	cout << endl;*/

	/*for (int i = 0, q = 9; i < 10 and q >= 0; i++, q--)
	{
		cout << i << "\t" << q << endl;
	}*/

	int choice;
	do
	{
		system("cls");
		cout << R"(
			1 - Red;
			2 - Green;
			3 - Yellow;
			4 - Aqua;
			5 - Purple;
			0 - Exit
			Enter choice :: )";
		cin >> choice;
		switch (choice)
		{
		case colors::RED:
			system("color 04"); break;
		case colors::GREEN:
			system("color 02"); break;
		case colors::YELLOW:
			system("color 06"); break;
		case colors::AQUA:
			system("color 03"); break;
		case colors::PURPLE:
			system("color 05"); break;
		}
	} while (choice != colors::EXIT);
	

}
