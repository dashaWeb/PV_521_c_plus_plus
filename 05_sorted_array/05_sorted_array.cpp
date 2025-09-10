#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    const int SIZE = 10;
    int arr[SIZE]{};

    // fill unique value [1,10]

    for (size_t i = 0; i < SIZE; )
    {
        bool flag = true;
        int number = rand() % 10 + 1;

        for (size_t j = 0; j < i; j++)
        {
            if (arr[j] == number) {
                flag = false;
                break;
            }
        }

        if (flag) {
            arr[i] = number;
            i++;
        }
    }
    //print

    cout << "\t Bubble Sorted" << endl;
    cout << "Before Sorted array :: \t ";
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;


    for (size_t i = 0; i < SIZE - 1; i++)
    {
        for (size_t j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "After Sorted array :: \t ";
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;



    ////////////////////////////
    // fill unique value [1,10]

    for (size_t i = 0; i < SIZE; )
    {
        bool flag = true;
        int number = rand() % 10 + 1;

        for (size_t j = 0; j < i; j++)
        {
            if (arr[j] == number) {
                flag = false;
                break;
            }
        }

        if (flag) {
            arr[i] = number;
            i++;
        }
    }
    cout << "\t Insert Sorted" << endl;
    cout << "Before Sorted array :: \t ";
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (size_t i = 1; i < SIZE; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "After  Sorted array :: \t ";
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

