#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    
    const int row = 3, col = 4;

    //int arr[row][col]{};

    /*int arr[][col]
    {
        {1,2,5},
        {4,5,6,11},
        {7,8,9}
    };*/

    int arr[row][col]{};

    /*
    arr[0][0] = rand() % 10 + 1;
    arr[0][1] = rand() % 10 + 1;
    arr[0][2] = rand() % 10 + 1;
    arr[0][3] = rand() % 10 + 1;*/
    /*for (size_t i = 0; i < col; i++)
    {
        arr[0][i] = rand() % 10 + 1;
    }
    for (size_t i = 0; i < col; i++)
    {
        arr[1][i] = rand() % 10 + 1;
    }
    for (size_t i = 0; i < col; i++)
    {
        arr[2][i] = rand() % 10 + 1;
    }*/
    //fill array
    for (size_t j = 0; j < row; j++) // row
    {
        for (size_t i = 0; i < col; i++) // col
        {
            arr[j][i] = rand() % 10 + 1;
        }
    }
    //print
    for (size_t j = 0; j < row; j++) // row
    {
        for (size_t i = 0; i < col; i++) // col
        {
            cout << arr[j][i] << "\t";
        }
        cout << endl;
    }

    int arr_2[3][row][col]{
        {
            {1,2,3},
            {1,2,3},
            {1,2,3}
        },
        {
            {1,2,3},
            {1,2,3},
            {1,2,3}
        },
        {
            {1,2,3},
            {1,2,3},
            {1,2,3}
        },
    };
    cout << "\n\n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            for (size_t q = 0; q < col; q++)
            {
                arr_2[i][j][q] = rand() % 10 + 1;
                cout << arr_2[i][j][q] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

}

