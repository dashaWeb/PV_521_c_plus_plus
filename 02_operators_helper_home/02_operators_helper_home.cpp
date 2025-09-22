

#include <iostream>
using namespace std;
int main()
{
	/*Завдання 1
		Користувач вводить з клавіатури ціле шестизначне число.Написати програму, яка визначає, чи є введене число - щасливим(Щасливим вважається шестизначне число, у якого сума перших 3 цифр дорівнює сумі других трьох цифр).Якщо користувач ввів не шестизначне число - повідомлення про помилку.*/

	int number;
	cout << "Enter number :: ";
	cin >> number;

	if (number >= 100000 and number <= 999999)
	{
		// number  = 123456
		int a, b, c, d, e, f;
		f = number % 10; // number(123456) % 10 -> 6
		number = number / 10; // number(123456) / 10 -> 12345

		e = number % 10; // number(12345) % 10 --> 5
		number = number / 10; // number(12345) / 10 -> 1234

		d = number % 10; // number(1234) % 10 --> 4
		number = number / 10; // number(1234) / 10 -> 123

		c = number % 10; // number(123) % 10 --> 3
		number = number / 10; // number(123) / 10 -> 12

		b = number % 10; // number(12) % 10 --> 2
		number = number / 10; // number(12) / 10 -> 1

		a = number % 10; // number(1) % 10 --> 1
		number = number / 10; // number(1) / 10 -> 0

		int sum_left = a + b + c;
		int sum_right = d + e + f;

		if (sum_left == sum_right)
		{
			cout << "Good" << endl;
		}
		else {

		}

	}
	else {
		cout << "Error value" << endl;
	}


	// 1234
	//int a, b, c, d;
	//a = 1; 
	//b = 2; 
	//c = 3;
	//d = 4;

	////int res = b * 1000 + a * 100 + d * 10 + c;
	//// 2 * 1000 + 1 * 100 + 4 * 10 + 3
	//// 2143

	//int res = 0;
	//res *= 10; // res{0} * 10 --> res{0}
	//res += b; // res{0} + 2 --> res{2}

	//res *= 10; // res{2} * 10 --> res{20}
	//res += a; // res{20} + 1 --> res{21}


	//res *= 10; // res{21} * 10 --> res{210}
	//res += d; // res{210} + 4 --> res{214}

	//res *= 10; // res{214} * 10 --> res{2140}
	//res += c; // res{2140} + 3 --> res{2143}



	//Вантажний літак повинен пролетіти з вантажем з пункту А в пункт С через пункт В.Ємність бака для палива у літака — 300 літрів.Споживання палива на 1 км залежно від ваги вантажу в літака таке :
	//до 500 кг — 1 літр / км;
	//до 1000 кг — 4 літри / км;
	//до 1500 кг — 7 літрів / км;
	//до 2000 кг — 9 літрів / км;
	//понад 2000 кг літак не піднімає.
	//	Користувач вводить відстань між пунктами А і В, відстань між пунктами В і С, а також вагу вантажу.Програма має розрахувати яка мінімальна кількість палива необхідна для дозаправки літаку в пункті В, щоб долетіти з пункту А в пункт С.У разі неможливості подолати будь - яку з відстаней програма повинна вивести повідомлення про неможливість польоту за введеним маршрутом.
	int AB, BC, weight, volumeAB, volumeBC;
	cout << "Enter AB :: ";
	cin >> AB;
	cout << "Enter BC :: ";
	cin >> BC;
	cout << "Enter weight :: ";
	cin >> weight;

	if (AB > 300 or BC > 300 or weight > 2000) {
		cout << "Error" << endl;
	}
	else {
		if (weight < 500) {
			volumeAB = AB * 1;
			volumeBC = BC * 1;
		}
		else if (weight < 1000) {
			volumeAB = AB * 4;
			volumeBC = BC * 4;
		}
		else if (weight < 1500) {
			volumeAB = AB * 7;
			volumeBC = BC * 7;
		}
		else if (weight < 2000) {
			volumeAB = AB * 9;
			volumeBC = BC * 9;
		}		
	}
	if (volumeAB > 300 or volumeBC > 300)
	{
		cout << "Error !" << endl;
	}
	else {
		int res = volumeBC - (300 - volumeAB);
	}
}
