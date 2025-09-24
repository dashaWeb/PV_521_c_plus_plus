#include <iostream>
using namespace std;


int main()
{
    /*Завдання 2
        Використовуючи покажчик на масив цілих чисел, змінити порядок проходження елементів масиву на протилежний.
        Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.*/

    const int SIZE = 6;
    int arr[SIZE]{ 4,7,8,9,2,5};

    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;


    /*for (int i = 0, j = SIZE - 1; i < SIZE / 2; i++, j--)
    {
        int tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr+ j) = tmp;
    }*/

    int* start_ptr = arr;
    int* end_ptr = arr + SIZE - 1;

    int i = 0;
    while (i < SIZE / 2)
    {
        i++;
        cout << start_ptr << "\t" << end_ptr << endl;

        int tmp = *start_ptr;
        *start_ptr = *end_ptr;
        *end_ptr = tmp;

        start_ptr++;
        end_ptr--;
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;

}
