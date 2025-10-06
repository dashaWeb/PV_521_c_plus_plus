#include <iostream>
#include <string>
using namespace std;


struct Date
{
    size_t day;
    size_t month;
    size_t year;
    string getDate()
    {
        // 02.03.2000
        string date = "";
        if (day < 10)
            date += "0";

        date += to_string(day) + ".";
        
        if (month < 10)
            date += "0";

        date += to_string(month) + ".";
        date += to_string(year);
        return date;
    }

};

struct Student
{
    string name;
    string surname;
    string email;
    int marks[10]{};
    Date birthday{};
    string group_name;
};


void print(Student stud)
{
    cout << "\n";
    cout << "\t First name :: " << stud.name << endl;
    cout << "\t Last name  :: " << stud.surname << endl;
    cout << "\t Email      :: " << stud.email << endl;
    cout << "\t Marks      :: ";
    for (size_t i = 0; i < 10; i++)
    {
        if (stud.marks[i] == 0)
            break;
        cout << stud.marks[i] << "\t";
    }
    cout << endl;

    cout << "\t Birthday   :: " << stud.birthday.getDate() << endl;
    cout << "\t Group      :: " << stud.group_name << endl;

}

void input(Student& stud)
{
    cout << "\n";
    cout << "\t First name :: "; cin >> stud.name;
    cout << "\t Last name  :: "; cin >> stud.surname;
    cout << "\t Email      :: "; cin >> stud.email;
    cout << "\t Marks      :: ";
    for (size_t i = 0; i < 10; i++)
    {
        cin >> stud.marks[i];
    }

    cout << "\t Birthday   :: "; cin >> stud.birthday.day >> stud.birthday.month >> stud.birthday.year;
    cout << "\t Group      :: "; cin >> stud.group_name;

}

int main()
{
    
    Student stud_1 = { "Pavlo","Bondar","pavlo@gmail.com",{10,11,12,10},{12,03,2001},"PD521" };
    stud_1.group_name = "PV521";

    cout << stud_1.name << " " << stud_1.surname << endl;

    Student* stud_2 = new Student;
    stud_2->name = "Alex";
    stud_2->surname = "Demchuk";
    cout << stud_2->name << " " << stud_2->surname << endl;

    Student group[10]{ stud_1,*stud_2 };
    for (size_t i = 0; i < 2; i++)
    {
        cout << "========== #" << i + 1 << " ===============" << endl;
        print(group[i]);
    }

    //print(*stud_2);
    //print(stud_1);
    //input(stud_1);
    //print(stud_1);



}

