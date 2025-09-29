#include <iostream>
using namespace std;

int* createArray(size_t size)
{
	return new int[size];
}


void fillArray(int* arr, size_t size, int min = 1, int max = 10)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* arr, size_t size, string prompt = "")
{
	cout << (prompt.size() > 0 ? prompt + " :: \t " : "");
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void deleteArray(int*& arr)
{
	delete[] arr;
	arr = nullptr;
}
void pushBack(int*& arr, int& size, int value)
{

	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	size++;
	deleteArray(arr);
	arr = tmp;
}
int* noRepeatAinB(int* a, int* b, int size_a, int size_b, int& size_c)
{
	int* c = nullptr;
	size_c = 0;

	for (size_t i = 0; i < size_a; i++)
	{
		bool flag = true;
		for (size_t j = 0; j < size_b; j++)
		{
			if (a[i] == b[j]) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			for (size_t j = 0; j < size_c; j++)
			{
				if (c[j] == a[i]) {
					flag = false;
					break;
				}
			}
			if(flag)
				pushBack(c, size_c, a[i]);
		}
	}
	return c;
}

int main()
{
	/*Завдання 1
		Дано два масиви : А[M] і B[N](M і N вводяться з клавіатури).Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати елементи масиву A, що не включаються в масив B, без повторень.*/

	int* arr_a, * arr_b, size_a, size_b;
	cout << "Enter size array A :: ";
	cin >> size_a;
	cout << "Enter size array B :: ";
	cin >> size_b;



	arr_a = createArray(size_a);
	arr_b = createArray(size_b);

	fillArray(arr_a, size_a, 1, 10);
	fillArray(arr_b, size_b, 1, 10);

	printArray(arr_a, size_a, "Print A");
	printArray(arr_b, size_b, "Print B");


	int* arr_c, size_c;
	arr_c = noRepeatAinB(arr_a, arr_b, size_a, size_b, size_c);
	printArray(arr_c, size_c, "Print C");
}
