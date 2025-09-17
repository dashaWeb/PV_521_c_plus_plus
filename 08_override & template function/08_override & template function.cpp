#include <iostream>
#include <ctime>
using namespace std;


// override function
//int sum(int a, int b)
//{
//    return a + b;
//}
//
//double sum(double a, double b)
//{
//    return a + b;
//}
//
//char sum(char a, char b)
//{
//    return a + b;
//}
//
//string sum(string a, string b)
//{
//    return a + b;
//}
// template function

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

template <typename T, typename T2>
auto sum(T a, T2 b)
{
    return a + b;
    // int + double => double
}
//double sum(int a, double b)
//{
//    return a + b;
//}
//double sum(double a, int b)
//{
//
//    return a + b;
//}

//void fillArray(int arr[], size_t length, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < length; i++)
//    {
//        arr[i] = min + rand() % (max - min + 1); // 0 - 9
//    }
//}
//
//void fillArray(double arr[], size_t length, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < length; i++)
//    {
//        arr[i] = min + rand() % (max - min + 1); // 0 - 9
//    }
//}
//
//void fillArray(char arr[], size_t length, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < length; i++)
//    {
//        arr[i] = min + rand() % (max - min + 1); // 0 - 9
//    }
//}

template <typename T>
void fillArray(T arr[], size_t length, int min = 1, int max = 10)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = min + rand() % (max - min + 1); // 0 - 9
    }
}

void fillArray(double arr[], size_t length, int min = 1, int max = 10)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = (min + rand() % (max - min + 1)) / 1.3; // 0 - 9
    }
}

template <typename T>
void printArray(T arr[], size_t length, string prompt = "")
{
    cout << prompt << (prompt.size() > 0 ? " :: \t" : "");
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
//void printArray(int arr[], size_t length, string prompt = "")
//{
//    cout << prompt <<(prompt.size() > 0 ? " :: \t" : "");
//    for (size_t i = 0; i < length; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//}
int main()
{
    srand(time(0));
    string line1 = "Apple";
    string line2 = "Plum";
    cout << "Result sum :: " << sum(2, 7) << endl; // 9
    cout << "Result sum :: " << sum(2.9, 7.9) << endl; // 10.8
    cout << "Result sum :: " << sum('a', 'b') << endl; // 10.8
    cout << "Result sum :: " << sum(line1,line2) << endl; // 10.8
    cout << "Result sum :: " << sum((float)2.5, float(3.2)) << endl; // 10.8
    cout << "Result sum :: " << sum(2,4.5) << endl; // 6.5
    cout << "Result sum :: " << sum(2.4,5) << endl; // 7.5

    auto number = 2;
    auto number2 = 2.6;
    auto symbol = 'A';
    auto line = line1;


    cout << "\n\n" << endl;
    const size_t SIZE = 10;
    int arr[SIZE]{};
    
    fillArray(arr, SIZE);
    printArray(arr, SIZE, "Print Array");

    int rnd[16];
    fillArray(rnd, 16, -15, 15);
    printArray(rnd, 16, "Helper array");


    double arr_double[SIZE];
    char arr_char[SIZE];

    fillArray(arr_double, SIZE);
    fillArray(arr_char, SIZE, 'a', 'z'); // a = 97, z = 122

    printArray(arr_double, SIZE, "Print Array double");
    printArray(arr_char, SIZE, "Print Array char");

}
