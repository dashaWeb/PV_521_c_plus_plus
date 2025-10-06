﻿#include <iostream>
#include <ctime>
using namespace std;


template <typename T>
void fill(T** arr, const int& row, const int& col, const int& min = 1, const int& max = 10)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}


template <typename T>
void print(T** arr, const int& row, const int& col, const string& prompt = "")
{

    cout << (prompt.empty() ? "" : prompt + " :: \n");

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
template <typename T>
void fillArray(T* arr, size_t size, int min = 1, int max = 2)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}

//Написати функцію, що додає рядок двовимірному масиву в кінець.
//Написати функцію, що додає рядок двовимірному масиву на початок.
//Написати функцію, що додає рядок двовимірному масиву в зазначену позицію.
template<typename T>
void insert(T**& arr, int& row, const int& col, const int& index)
{
    if (index < 0 or index > row) {
        cout << "Error index" << endl;
        return;
    }
    T** tmp = new T * [row + 1];
    for (size_t i = 0; i < row; i++)
    {
        if (i < index) {
            tmp[i] = arr[i];
        }
        else {
            tmp[i + 1] = arr[i];
        }
    }
    tmp[index] = new T[col]{};

    row++;
    delete[] arr;
    arr = tmp;
}
// 
// 
//Написати функцію, що видаляє рядок двовимірного масиву за вказаним номером.
template <typename T>
void remove(T**& arr, int& row, const int& index)
{
    if (index < 0 or index >= row) {
        cout << "Error index" << endl;
        return;
    }
    T** tmp = new T * [--row];
    for (size_t i = 0; i < row; i++)
    {
        if (i < index) {
            tmp[i] = arr[i];
        }
        else {
            tmp[i] = arr[i + 1];
        }
    }
    delete[] arr[index];
    delete[] arr;

    arr = tmp;
}

//Написати функцію, що видаляє рядок двовимірного масиву в кінці.
//Написати функцію, що видаляє рядок двовимірного масиву на початку.

template<typename T>
void pushBack(T**& arr, int& row, const int& col)
{
    insert(arr, row, col, row);
}

template<typename T>
void pushFront(T**& arr, int& row, const int& col)
{
    insert(arr, row, col, 0);
}

template<typename T>
void popBack(T**& arr, int& row)
{
    remove(arr, row, row - 1);
}

template<typename T>
void popFront(T**& arr, int& row)
{
    remove(arr, row, 0);
}
void deleteArray(int*& arr)
{
    delete[] arr;
    arr = nullptr;
}
void insert(int*& arr, int& size, int value, int index)
{
    if (index < 0 or index > size) {
        cout << "Error index." << endl;
        return;
    }
    int* tmp = new int[++size];
    for (size_t i = 0, j = 0; i < size; i++)
    {
        if (i == index)
        {
            tmp[i] = value;
            continue;
        }

        tmp[i] = arr[j++];
    }

    deleteArray(arr);
    arr = tmp;
}

void remove(int*& arr, int& size,int index)
{
    if (index < 0 or index >= size) {
        cout << "Error index." << endl;
        return;
    }
    int* tmp = new int[--size];
    for (size_t i = 0, j = 0; i <= size; i++)
    {
        if (i == index)
        {
            continue;
        }

        tmp[j++] = arr[i];
    }
    deleteArray(arr);
    arr = tmp;
}

template<typename T>
void insertColumn(T** arr, const int& row, int& col, const int& index, const T& value = T())
{
    for (size_t i = 0; i < row; i++)
    {
        int tmp = col;
        insert(arr[i], tmp, value, index);
    }
    col++;
}

template<typename T>
void removeColumn(T** arr, const int& row, int& col, const int& index)
{
    for (size_t i = 0; i < row; i++)
    {
        int tmp = col;
        remove(arr[i], tmp, index);
    }
    col--;
}
int main()
{
    
    int row = 4, col = 6;

    // create mult array
    int** arr = new int* [row];

    for (size_t i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    fill(arr, row, col);
    print(arr, row, col, "Print Array ");

    cout << endl;

    insert(arr, row, col, 2);
    print(arr, row, col, "Print insert ");


    remove(arr, row, 1);
    print(arr, row, col, "Print remove ");


    cout << endl;
    insertColumn(arr, row,col,2);
    print(arr, row, col, "Print insertColumn ");

    cout << endl;
    removeColumn(arr, row, col, 3);
    print(arr, row, col, "Print removeColumn ");

    // delete mult array
    for (size_t i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;

   
    

}
