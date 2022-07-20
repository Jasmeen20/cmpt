#include<iostream>
using namespace std;
class Rational number
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
			cout << "Rational Numbers less than 
		