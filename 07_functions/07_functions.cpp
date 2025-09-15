#include <iostream>
using namespace std;

const double PI = 3.14;

void showMessage(int age, string name = "Anonim")
{
	if (age < 16)
	{
		cout << "Exit! " << name << endl;
		return;
	}

	cout << "Hello, " << name << endl;

	/*if (age >= 16)
		cout << "Hello, " << name << endl;
	else
		cout << "Exit! " << name << endl;*/
}



int sum(int a, int b)
{
	/*int res = a + b;
	return res;*/
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

double divi(int a, int b)
{
	if (b == 0) {
		return 0;
	}
	return (double)a / b;
	// double / int ==> double
}


double calculate(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return sum(a, b);
	case '-':
		return sub(a, b);
	case '*':
		return mult(a, b);
	case '/':
		return divi(a, b);
	}
}

int main()
{
	//showMessage("Olia", 18); // Invoke
	//showMessage("Sasha", 14); // Invoke

	/*int res = sum(5, 2);
	cout << res << endl;

	int res_2 = sum(res, 33);
	cout << res_2 << endl;

	int numb_1, numb_2;
	cout << "Enter two number :: ";
	cin >> numb_1 >> numb_2;

	cout << "Sum  :: " << numb_1 << " + " << numb_2 << " = " << sum(numb_1, numb_2) << endl;
	cout << "Sub  :: " << numb_1 << " - " << numb_2 << " = " << sub(numb_1, numb_2) << endl;
	cout << "Mult :: " << numb_1 << " * " << numb_2 << " = " << mult(numb_1, numb_2) << endl;
	cout << "Div  :: " << numb_1 << " / " << numb_2 << " = " << divi(numb_1, numb_2) << endl;*/

	//int a, b;
	//char op;

	//while (true)
	//{
	//	cout << "Enter :: "; // 2 + 2
	//	cin >> a >> op >> b;
	//	cout << a << " " << op << " " << b << " = " << calculate(a, b, op) << endl;
	//}
	showMessage(20);
	showMessage(20, "Masha");
}

