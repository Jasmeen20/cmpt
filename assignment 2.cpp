#include<iostream>
using namespace std;
class Rational 
{
	int num, den;
public:
	void read()
	{
		cout << "Enter Denominator for Rational Number"
			<< endl;
		cin >> den;
		cout << "Enter Numerator for Rational Number"
			<< endl;
		cin >> num;
	}
	void add(RationalNumber 1 RationalNumber 2)
	{
		num = 1.num * 2.den + 1.den * 2.num;
		den = 1.den * 2.den;
		hcf();
		cout << "Rational Numbers Addition Completed"
			<< endl;
	}
	void sub(RationalNumber 1, RationalNumber 2)
	{
		num = 1.num * 2.den - 1.den * 2.num;
		den = 1.den * 2.den;
		hcf();
		cout << "Rational Number Subtraction Completed"
			<< endl;
	}
	void divi(RationalNumber 1, RationalNumber 2)
	{
		num = 1.num * 2.den;
		den = 1.den * 2.num;
		hcf();
		cout << "Rational Numbers Division Completed"
			<< endl;
	}
	void mul(RationalNumber 1, RationalNumber 2)
	{
		num = 1.num * 2.den;
		den = 1.den * 2.num;
		hcf();
		cout << "Rational Numbers Multipication Completed"
			<< endl;
	}
	void lessthan(RationalNumber 1, RationalNumber 2)
	{
		num = 1.num * 2.den;
		den = 1.den * 2.num;
		if (num < den)
			cout << "Rational Numbers less than operation is true between two numbers"
			<< endl;
		else
			cout << "Rational Numbers less than operation is false between two numbers"
			<< endl;
	}
	int hcf()
	{
		int 1, 2, 3;
		1 = num;
		2 = den;
		do
		{
			3 = 1 % 2;
			1 = 2;
			2 = 3;
		} while (3 != 0);
		num = num / 1;
		den = den / 1;
	}
	void print()
	{
		cout << "Result is :" << num << "/" << den << endl;
	}
};
int main()
{
	Rational n1, n2, n3;
	n1.read();
	n2.read();
	n3.add(n1, n2);
	n3.print();
	n3.mul(n1, n2);
	n3.print();
	n3.divi(n1, n2);
	n3.print();
	n3.lessthan(n1, n2);
}
}

		