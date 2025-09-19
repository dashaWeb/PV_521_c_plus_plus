#include <iostream>
#include <ctime>
using namespace std;


template <typename T, size_t COL>
void fillArray(T arr[][COL], size_t row, size_t col, int min = 1, int max = 10);

template <typename T, size_t COL>
void printArray(T arr[][COL], size_t row, size_t col, string prompt = "");

int main()
{
    srand(time(0));
    
    const int row = 3, col = 5;
   /* int arr[][col]
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };*/
    int arr[row][col]{};
    fillArray(arr, row, col);
    printArray(arr, row, col, "Print Array");

    int arr_2[row][10];
    fillArray(arr_2, row, 10);
    printArray(arr_2, row, 10, "\n\nPrint Array");

}

template <typename T, size_t COL>
void fillArray(T arr[][COL], size_t row, size_t col, int min, int max)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}

template <typename T, size_t COL>
void printArray(T arr[][COL], size_t row, size_t col, string prompt)
{

    cout << (prompt.size() > 0 ? prompt + " :: \n" : "");

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

