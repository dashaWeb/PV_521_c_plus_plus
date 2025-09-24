#pragma once
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int* createArray(size_t size);
void fillArray(int* arr, size_t size, int min = 1, int max = 10);
void printArray(int* arr, size_t size, string prompt = "");
void deleteArray(int* &arr);

void pushBack(int* &arr, int& size, int value);