﻿#include <iostream>

//using namespace std;
using std::cout;
using std::endl;
using std::boolalpha;

int main()
{
    //cout << " \\He\bllo\\ World! \n";
    std::cout << " \t I \"love\" \a 'C++' " << endl;
    cout << R"(
        I                  I
            Love    Love
                 C++        
)";
    
// - однорядковий коментар
/* багаторядковий коментар */

    cout << "\n\n========================================\n\n";

    // type name

    int number_int = 10;
    short number_short = 45;
    long long number_long = 4785;
    float number_float = 4.5;
    double number_double = 4521.2;
    char symbol = 'A';
    bool flag = true;

    cout << "Int    :: " << number_int << "\t size :: " << sizeof(number_int) << " bytes" << endl;
    cout << "Short  :: " << number_short << "\t size :: " << sizeof(number_short) << " bytes" << endl;
    cout << "Long   :: " << number_long << "\t size :: " << sizeof(number_long) << " bytes" << endl;
    cout << "Float  :: " << number_float << "\t size :: " << sizeof(number_float) << " bytes" << endl;
    cout << "Double :: " << number_double << "\t size :: " << sizeof(number_double) << " bytes" << endl;
    cout << "Char   :: " << symbol << "\t size :: " << sizeof(symbol) << " bytes" << endl;
    cout << "Bool   :: " << flag << "\t size :: " << sizeof(flag) << " bytes" << endl;


    cout << "\n\n========================================\n\n";
    number_short = { 45 };
    number_float = { 45.9 };
    //number_int = { 45.9 };
    cout << "Int    :: " << number_int << "\t size :: " << sizeof(number_int) << " bytes" << endl;

    cout << "\n\n========================================\n\n";


    // +, -, /, *, %

    int a = 5, b = 2;

    double res = (double)a / b;
    // double / int
    cout << "Result :: " << (int)res << endl;



    number_short = 32767;
    cout << "short :: " << number_short << endl;
    number_short = 32768;
    cout << "short :: " << number_short << endl;

    cout << "Boolean :: " << boolalpha << (bool)-25 << endl;
    cout << "Int :: " << boolalpha << (int)'A' << endl;
    cout << "Char :: " << boolalpha << (char)122 << endl;

    const double PI = 3.14;

}

