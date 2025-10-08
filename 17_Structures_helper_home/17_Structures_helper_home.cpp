#include <iostream>
#include <string>
using namespace std;


struct Fraction
{
    int num;
    int denum;
    // 1/2
    string get()
    {
        return to_string(num) + "/" + to_string(denum);
    }
};

void input(Fraction& num, int a, int b)
{
    num.num = a;
    num.denum = b;
}
Fraction add(const Fraction& one, const Fraction& two)
{
    Fraction res{};
    res.num = one.num * two.denum + two.num * one.denum;
    res.denum = one.denum * two.denum;
    return res;
}

Fraction sub(const Fraction& one, const Fraction& two)
{
    Fraction res{};
    res.num = one.num * two.denum - two.num * one.denum;
    res.denum = one.denum * two.denum;
    return res;
}

Fraction mult(const Fraction& one, const Fraction& two)
{
    Fraction res{};
    res.num = one.num *  two.num;
    res.denum = one.denum * two.denum;
    return res;
}
Fraction div(const Fraction& one, const Fraction& two)
{
    Fraction res{};
    res.num = one.num * two.denum;
    res.denum = one.denum * two.num;
    return res;
}


int main()
{
    Fraction one{}, two{};
    input(one, 1, 2);
    input(two, 3, 7);
    cout << "One fraction :: " << one.get() << endl;
    cout << "Two fraction :: " << two.get() << endl;

    cout << one.get() << " + " << two.get() << " = " << add(one, two).get() << endl;
    cout << one.get() << " - " << two.get() << " = " << sub(one, two).get() << endl;
    cout << one.get() << " * " << two.get() << " = " << mult(one, two).get() << endl;
    cout << one.get() << " / " << two.get() << " = " << div(one, two).get() << endl;

}
