#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	/*Завдання 3
		В одновимірному масиві, що складається з N дійсних чисел обчислити :
		Суму від'ємних елементів.
		Добуток елементів, що знаходяться між min і max елементами.
		Добуток елементів з парними номерами.
		Суму елементів, що знаходяться між першим і останнім від'ємними елементами.*/

	srand(time(0));

	const int SIZE = 10;
	int arr[SIZE]{};

	// min + rand() % (max - min + 1);
	int min = -10, max = 10;
	// fill array [-10,10]
	for (size_t i = 0; i < SIZE; )
	{
		int number = min + rand() % (max - min + 1);
		if (number != 0) {
			arr[i] = number;
			i++;
		}
	}
	//print array
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	//Суму від'ємних елементів.
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0) sum = sum + arr[i];
	}
	cout << "Sum negative :: " << sum << endl;

	//Добуток елементів, що знаходяться між min і max елементами.
	int min_index = 0, max_index = 0;
	for (size_t i = 1; i < SIZE; i++)
	{
		if (arr[min_index] > arr[i]) min_index = i;
		if (arr[max_index] < arr[i]) max_index = i;
	}
	int mult = 1;

	int start = min_index <= max_index ? min_index : max_index;
	int end = max_index >= min_index ? max_index : min_index;

	for (size_t i = start; i <= end; i++)
	{
		mult *= arr[i];
	}
	cout << "Mult :: " << mult << endl;
	//Добуток елементів з парними номерами.
	mult = 1;
	for (size_t i = 0; i < SIZE; i+=2)
	{
		/*if(i % 2 == 0)
			mult *= arr[i];*/
		mult *= arr[i];
	}
	cout << "Mult :: " << mult << endl;


	//Суму елементів, що знаходяться між першим і останнім від'ємними елементами.*/

	int first_index = 0, last_index = 0;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0) {
			first_index = i;
			break;
		}
	}
	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] < 0) {
			last_index = i; 
			break;
		}
	}

	sum = 0;
	for (size_t i = first_index + 1; i < last_index; i++)
	{
		sum += arr[i];
	}
	cout << "Sum negative :: " << sum << endl;
}
