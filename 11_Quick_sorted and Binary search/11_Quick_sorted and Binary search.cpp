#include <iostream>
#include <ctime>
using namespace std;



template <typename T>
void uniqueValues(T arr[], size_t length, int min = 1, int max = 10);

template <typename T>
void printArray(T arr[], size_t length, string prompt = "");


template <typename T>
void quickSort(T arr[], int left, int right);

template <typename T>
int binarySearch(T arr[], int left, int right, T key);


int main()
{
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE]{};

	uniqueValues(arr, SIZE);
	printArray(arr, SIZE, "Before :: ");
	quickSort(arr, 0, SIZE - 1);
	printArray(arr, SIZE, "After  :: ");


	int number;
	while (true)
	{
		cout << "Enter number :: "; cin >> number;
		cout << "Result search :: " << binarySearch(arr, 0, SIZE - 1, number) << endl;
	}

}


template<typename T>
void uniqueValues(T arr[], size_t length, int min, int max)
{
	for (size_t i = 0; i < length; )
	{
		int number = min + rand() % (max - min + 1);
		bool flag = true;

		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}

		if (flag)
		{
			arr[i] = number;
			i++;
		}
	}
}


template <typename T>
void printArray(T arr[], size_t length, string prompt)
{
	cout << (prompt.size() > 0 ? prompt + " :: " : "");
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void quickSort(T arr[], int left, int right)
{
	int tmp_l = left;
	int tmp_r = right;

	T pivot = arr[left];

	while (left < right)
	{
		while (pivot < arr[right] and left < right) right--;
		if (left != right) {
			arr[left] = arr[right];
			left++;
		}

		while (pivot > arr[left] and left < right) left++;
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}

	arr[left] = pivot;
	int index = left;
	left = tmp_l;
	right = tmp_r;

	if (index > left)
	{
		quickSort(arr, left, index - 1);
	}
	if (index < right)
	{
		quickSort(arr, index + 1, right);
	}



}

template<typename T>
int binarySearch(T arr[], int left, int right, T key)
{
	if (left > right) return -1;
	int mid = (left + right) / 2;

	if (arr[mid] == key) return mid;

	if (key < arr[mid])
		binarySearch(arr, 0, mid - 1, key);
	else if (key > arr[mid])
		binarySearch(arr, mid + 1, right, key);

}
