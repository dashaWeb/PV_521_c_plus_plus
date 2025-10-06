#include <iostream>
#include <ctime>
using namespace std;


void fill(int** arr, const size_t& row, const size_t& col, const int& min = 1, const int& max = 10)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);
		}
	}
}

void print(int** arr, const size_t& row, const size_t& col, const string& prompt = "")
{
	cout << (!prompt.empty() ? prompt + " :: \n" : "");
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int** create(const size_t& row, const size_t& col)
{
	int** tmp = new int* [row];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = new int[col];
	}
	return tmp;
}
void delete_(int**& arr, const size_t& row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}



int main()
{
	srand(time(0));
    //Напишіть функцію множення матриць.Матриця являє собою таблицю чисел.
	size_t row_a = 2, col_a = 4, row_b = 4, col_b = 3, row_c = row_a, col_c = col_b;

	if (col_a != row_b) {
		cout << "Error size Matrix";
		return 0;
	}

	int** A = create(row_a, col_a);
	int** B = create(row_b, col_b);
	int** C = create(row_c, col_c);

	fill(A, row_a, col_a);
	fill(B, row_b, col_b);

	print(A, row_a, col_a, "Print Matrix A");
	cout << endl;
	print(B, row_b, col_b, "Print Matrix B");


	for (size_t i = 0; i < row_c; i++)
	{
		for (size_t j = 0; j < col_c; j++)
		{
			int sum = 0;

			for (size_t q = 0; q < col_a; q++)
			{
				sum += A[i][q] * B[q][j];
			}

			C[i][j] = sum;
		}
	}

	cout << endl;
	print(C, row_c, col_c, "Print Matrix C");

	delete_(A, row_a);
	delete_(B, row_b);
	delete_(C, row_c);
}

