#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];

    int length = sizeof(arr) / sizeof(arr[0]);

    //Input value
    /*for (size_t i = 0; i < length; i++)
    {
        cout << "Enter number :: ";
        cin >> arr[i];
    }*/
    //for (size_t i = 0; i < 10; i++)
    //{
    //    //cout << "Random :: " << rand() % 10 + 1 << endl; // [0 + 1 .... 9 + 1]
    //    //cout << "Random :: " << rand() % (15 + 1)  + 5 << endl; // [5 - 20] - [0 + 5 ..... 15 + 5 = 20]
    //    //rand() % (max - min + 1) + min
    //}

    // Fill
    for (size_t i = 0; i < length;)
    {
        bool flag = true;
        int number  = rand() % 10 + 1;

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

    cout << "Print Array :: \t ";
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;


    cout << "Reverse Array :: \t ";
    for (int i = length - 1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;


    string colors[3]{"red","green","blue"};
    for (size_t i = 0; i < 3; i++)
    {
        cout << colors[i] << endl;
    }


}
