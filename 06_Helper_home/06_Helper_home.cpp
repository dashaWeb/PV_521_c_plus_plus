#include <iostream>
#include <Windows.h>
#include <ctime>
#include <conio.h>
using namespace std;

enum Key
{
	LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80
};

int main()
{
	//Завдання 2
	//    Користувач вводить прибуток фірми за рік(12 місяців).Потім користувач вводить діапазон(наприклад, 3 і 6 — пошук між 3 - м і 6 - м місяцем).Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, з урахуванням обраного діапазону.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	const int SIZE = 12;
	double profite[SIZE];
	string months[SIZE]{ "Січень","Лютий", "Березень", "Квітень", "Травень", "Червень", "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень" };

	for (size_t i = 0; i < SIZE; i++)
	{
		profite[i] = rand() % 5000 + 1000;
		cout << "Введіть прибуток за " << months[i] << "\t :: " << profite[i] << endl;
	}
	int start_month = 3, end_month = 6;
	start_month--;
	end_month--;

	int min = start_month;
	int max = start_month;
	for (size_t i = start_month + 1; i <= end_month; i++)
	{
		if (profite[min] > profite[i]) min = i;
		if (profite[max] < profite[i]) max = i;
	}
	cout << "Максимальний прибуток в місяці " << months[max] << endl;
	cout << "Мінімальний прибуток в місяці " << months[min] << endl;


	/*Завдання 3
		Створіть двовимірний масив.Заповніть його випадковими числами та покажіть на екран.Користувач обирає кількість зсувів і положення(ліворуч, праворуч, вгору, вниз).Виконати зсув масиву і показати на екран отриманий результат.Зсув циклічний.*/
	const int row = 3, col = 5;
	int arr[row][col]{};
	cout << "\n\n ============================== \n\n";
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	int step = 2;
	for (size_t q = 0; q < step; q++)
	{
		for (size_t i = 0; i < row; i++)
		{
			int tmp = arr[i][col - 1];
			for (int j = col - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = tmp;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}*/
	int key;
	do
	{
		system("cls");
		// print
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}

		key = _getch();

		switch (key)
		{
		case Key::RIGHT:
			for (size_t i = 0; i < row; i++)
			{
				int tmp = arr[i][col - 1];
				for (int j = col - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
				arr[i][0] = tmp;
			}
			break;
		case Key::LEFT:
			for (size_t i = 0; i < row; i++)
			{
				int tmp = arr[i][0];
				for (int j = 0; j < col - 1; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
				arr[i][col - 1] = tmp;
			}
			break;

		case Key::UP:
			for (size_t i = 0; i < col; i++)
			{
				int tmp = arr[0][i];
				for (size_t j = 0; j < row - 1; j++)
				{
					arr[j][i] = arr[j + 1][i];
				}
				arr[row - 1][i] = tmp;
			}
			break;
		case Key::DOWN:
			for (size_t i = 0; i < col; i++)
			{
				int tmp = arr[row - 1][i];
				for (size_t j = row - 1; j > 0; j--)
				{
					arr[j][i] = arr[j - 1][i];
				}
				arr[0][i] = tmp;
			}
			break;
		}


	} while (key != 27);

}


