#include <iostream>
#include <ctime>

using namespace std;

//void Swap(int* one, int* two)
//{
//    int tmp = *one;
//    *one = *two;
//    *two = tmp;
//}

void Swap(int& first, int& second)
{
    int tmp = first;
    first = second;
    second = tmp;
}

void fillArray(int* arr, size_t length, int min = 1, int max = 10)
{
    for (size_t i = 0; i < length; i++)
    {
       /* *arr = min + rand() % (max - min + 1);
        arr++;*/
        *(arr + i) = min + rand() % (max - min + 1);
    }
}
void printArray(int* arr, size_t length,string prompt = "")
{
    cout << (prompt.size() > 0 ? prompt + " :: " : "");
    for (size_t i = 0; i < length; i++)
    {
        cout << *arr++ << "\t";
    }
    cout << endl;
}


void min_max(int* arr, size_t length, int& min, int& max)
{
    min = *arr;
    max = *arr;
    for (size_t i = 0; i < length; i++, arr++)
    {
        if (min > *arr)
            min = *arr;
        if (max < *arr)
            max = *arr;
    }
}
int main()
{
    srand(time(0));
    int a = 5, b = 7;
    int* ptr_a = &a;
    cout << "A :: " << a << "\t B :: " << b << endl;
    cout << "Address a  = " << ptr_a  << "\t Value :: " << *ptr_a << endl;
    cout << "Address a  = " << &b  << "\t Value :: " << b << endl;
    Swap(a, b);
    cout << "A :: " << a << "\t B :: " << b << endl;

    const int SIZE = 10;
    int arr[SIZE]{1,12,33,4,5,6,74,8,9};
    int* ptr = arr;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    cout << "Address array :: " << ptr + 1 << "\t Value :: " << *(ptr + 1) << endl;
    cout << "Address array :: " << ptr + 2 << "\t Value :: " << *(ptr + 2) << endl;
    cout << "Address array :: " << ptr + 3 << "\t Value :: " << *(ptr + 3) << endl;
    cout << endl;

    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr++;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr++;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr++;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr++;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr++;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;
    ptr--;
    *ptr = 222;
    cout << "Address array :: " << ptr << "\t Value :: " << *ptr << endl;

    fillArray(arr, SIZE);
    printArray(arr, SIZE, "Print Array");

    int min, max;
    min_max(arr, SIZE, min, max);
    cout << "Min :: " << min << endl;
    cout << "Max :: " << max << endl;
}

