#include <iostream>
using namespace std;




int main()
{
	// Унарний оператор
	// -
	 //int a = 5;
	 //a = -a; // a = a * -1
	 //cout << a << endl;
	 // ! 
	 /*bool flag = true;
	 flag = !flag;*/
	 // ++, --; a++, b--, ++a, --b
	 /*int a = 5;
	 cout << "Increment :: " << a++ << endl;
	 cout << ++a << endl;*/

	 /*int a = 5, b = 3;
	 int res = a + b-- * a++ - --b + ++a;*/

	 /*
	 *   0. --b{3} = 2; ++a{5} = 6
		 1. b--{2} * a++{6} --> 12
		 2. a{6} + 12 --> 18
		 3. 18 - b{2} --> 16
		 4. 16 + a{6} --> 22
	 */
	 //cout << "Result :: " << res << endl;


	// Бінарний оператор
	// a + b; b == c, a = b
	// 
	// Тернарний оператор
	// a ? b : c
	/*bool flag = true;
	flag = !flag;
	cout << (flag ? "Green" : "Red") << endl;
	flag ? cout << "Green" << endl : cout << "Red" << endl;*/

	// 
 // Priority 
	 /*
	  ()
	  ++a, --b;
	  *,/,%
	  +,-
	  a++, b--
	 */

	 //int a, b;
	 //cout << "Enter number :: ";
	 //cin >> a;
	 //cout << "Enter number :: ";
	 //cin >> b;
	 ///*>, <, ==, >=, <= , !=*/
	 //cout << boolalpha << a << " == " << b << " --> " << (a == b) << endl;
	 //cout << boolalpha << a << " >= " << b << " --> " << (a >= b) << endl;
	 //cout << boolalpha << a << " <= " << b << " --> " << (a <= b) << endl;
	 //cout << boolalpha << a << " >  " << b << " --> " << (a > b) << endl;
	 //cout << boolalpha << a << " <  " << b  << " --> "<< (a < b) << endl;
	 //cout << boolalpha << a << " != " << b << " --> " << (a != b) << endl;

	 /*int day;
	 cout << "Enter number day :: ";
	 cin >> day;

	 if (day == 1) {
		 cout << "Monday" << endl;
		 cout << endl;
	 }
	 else if (day == 2) {
		 cout << "Tuesday" << endl;
	 }
	 else if (day == 3) {
		 cout << "Wednesday" << endl;
	 }
	 else {
		 cout << "Error" << endl;
	 }*/

	 // && - and, || - or

	 //int number;
	 //cout << "Enter number :: ";
	 //cin >> number;
	 ////[0,20]
	 //if (number >= 0 and number <= 20)
	 //{
	 //	cout << "ok" << endl;
	 //}
	 //else {
	 //	cout << "no ok" << endl;
	 //}

	 /*int month;
	 cout << "Enter number month :: ";
	 cin >> month;

	 if (month == 1 || month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) {
		 cout << "31 days " << endl;
	 }
	 else if (month == 4 or month == 6 or month == 9 or month == 11) {
		 cout << "30 days " << endl;
	 }
	 else if(month == 2)
	 {
		 int year;
		 cout << "Enter year :: ";
		 cin >> year;
		 cout << (year % 4 == 0 and year % 100 != 0 or year % 400 == 0 ? "29" : "28") << " days" << endl;
	 }*/

	 /*int day;
	 cout << "Enter number day :: ";
	 cin >> day;
	 switch (day)
	 {
	 case 1:
		 cout << "Monday" << endl;
		 break;
	 case 2:
		 cout << "Tuesday" << endl;
		 break;
	 case 3:
		 cout << "Wednesday" << endl;
		 break;
	 default:
		 cout << "Error" << endl;
		 break;
	 }*/

	 /*int month;
	 cout << "Enter number month :: ";
	 cin >> month;

	 switch (month)
	 {
	 case 1: case 3: case 5: case 7:
	 case 8:
	 case 10:
	 case 12:
		 cout << "31 days" << endl; break;
	 case 4:
	 case 6:
	 case 9:
	 case 11:
		 cout << "30 days" << endl; break;
	 case 2:
		 int year;
		 cout << "Enter year :: ";
		 cin >> year;
		 cout << (year % 4 == 0 and year % 100 != 0 or year % 400 == 0 ? "29" : "28") << " days" << endl;
		 break;
	 default:
		 cout << "Error" << endl;
		 break;
	 }*/

	 // 10.4
	 // (3)березень (31) + (2)лютий(28 або 29) + (1)січень(31) + 10
	 // 31 + 28 + 31 + 10
	int day, month;
	cout << "Enter dd mm :: ";
	cin >> day >> month;
	month--;
	int all_days = 0;
	switch (month)
	{
	case 11:
		all_days += 30;
	case 10:
		all_days += 31;
	case 9:
		all_days += 30;
	case 8:
		all_days += 31;
	case 7:
		all_days += 31;
	case 6:
		all_days += 30;
	case 5:
		all_days += 31;
	case 4:
		all_days += 30;
	case 3:
		all_days += 31;
	case 2:
		int year;
		cout << "Enter year :: ";
		cin >> year;
		all_days += (year % 4 == 0 and year % 100 != 0 or year % 400 == 0 ? 29 : 28);
	case 1:
		all_days += 31;
	}
	all_days += day;
	cout << "All days :: " << all_days << endl;

	int numb = 1234;
	int a = numb % 10; // 4
	numb /= 10; // 1234 / 10 = 123
	int b = numb % 10; // 3
	numb /= 10;
}
