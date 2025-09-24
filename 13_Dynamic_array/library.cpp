#include "library.h"

int* createArray(size_t size)
{
	return new int[size];
}


void fillArray(int* arr, size_t size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* arr, size_t size, string prompt)
{
	cout << (prompt.size() > 0 ? prompt + " :: \t " : "");
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void deleteArray(int* &arr)
{
	delete[] arr;
	arr = nullptr;
}

void pushBack(int* &arr, int& size, int value)
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
