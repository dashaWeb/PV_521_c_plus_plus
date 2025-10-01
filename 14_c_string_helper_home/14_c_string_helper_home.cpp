#include <iostream>
using namespace std;


char* insertSymbol(char* str, char s, int index)
{
    if (index < 0 or index > strlen(str)) {
        cout << "Enter index" << endl;
        return nullptr;
    }
    char* tmp = new char[strlen(str) + 2];
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (i < index) {
            tmp[i] = str[i];
        }
        else {
            tmp[i + 1] = str[i];
        }
    }
    tmp[index] = s;
    tmp[strlen(str) + 1] = '\0';
    return tmp;
}

void insertSymbolStat(char* str, char s, int index)
{
    if (index < 0 or index > strlen(str)) {
        cout << "Enter index" << endl;
        return;
    }
    int size = strlen(str);
    for (size_t i = strlen(str); i > index; i--)
    {
        str[i] = str[i - 1];
    }
    str[index] = s;
    str[size + 1] = '\0';
}

void task6(char* str)
{
    int counter_letter = 0;
    int counter_digit = 0;
    int counter_other = 0;

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i])) counter_letter++;
        //else if (isdigit(str[i])) counter_digit++;
        else if (str[i] >= '0' and str[i] <= '9') counter_digit++;
        else counter_other++;
    }

    cout << "Number of letters :: " << counter_letter << endl;
    cout << "Number of digits  :: " << counter_digit << endl;
    cout << "Number of other   :: " << counter_other << endl;

}

int main()
{
    /*Завдання 3
        Написати функцію, яка вставляє в рядок у вказану позицію заданий символ.*/

    char str[100], s;
    int index;
    cout << "Enter line :: ";
    cin.getline(str, 100);
    cout << "Enter symbol :: ";
    cin >> s;
    cout << "Enter position :: ";
    cin >> index;
    cout << str << endl;
    auto new_str = insertSymbol(str, s, index);
    cout << new_str << endl;

    insertSymbolStat(str, '^', 5);
    cout << str << endl;

    //Завдання 6
    //    Користувач вводить рядок.Визначити кількість літер, кількість цифр і кількість інших символів, присутніх у рядку.
    task6(str);
}
