#include "Fraction header.h"
#include <iostream>
#include <iostream>
using namespace std;
Fraction::Fraction(int numerator = 0, int denominator = 1) :
numerator(numerator), denominator(denominator) {}
Fraction Fraction::operator+(const Fraction& another)
{
	Fraction result;
	result.numerator = numerator*another.denominator + another.numerator*denominator;
	result.denominator = denominator *another.denominator;
	return(result);
}
Fraction Fraction::operator-(const Fraction& another)
{
	Fraction result;
	if (numerator == another.numerator && denominator == another.denominator)
		result.numerator = 0;//This makes resultant numerator zero
	else
	{
		result.numerator = numerator*another.denominator - another.numerator*denominator;
		result.denominator = denominator *another.denominator;
	}
	return(result);
}
Fraction Fraction::operator*(const Fraction& another)
{
	Fraction result;
	result.numerator = numerator * another.numerator;
	result.denominator = denominator * another.denominator;
	return(result);
}
Fraction Fraction::operator/(const Fraction& another)
{
	Fraction result;
	this->numerator = numerator* another.denominator;
	this->denominator = denominator *another.numerator;
	return(result);
}
void Fraction::getNumDenom()
{
	Fraction result;
	result.numerator = numerator;
	result.denominator = denominator;

}
void Fraction::setNumDenom(int num, int denom)
{
	numerator = num;
	denominator = denom;
}
void Fraction::print()
{
	int wholeNumber = 0;//whole of mixed fraction 
	int i = 1;

	while (numerator>denominator)
	{
		if ((numerator - denominator*i)>0)
		{

			numerator = numerator - denominator;//keeping track of the decreasing numerator
			wholeNumber = wholeNumber + 1;
			i++;
		}
		else
			break;
	}

	if (numerator == denominator)
	{
		wholeNumber = 1;
		cout << wholeNumber << endl;
	}
	else if (wholeNumber == 0)
	{
		cout << numerator << "/" << denominator << endl;
	}
	else
	{
		cout << wholeNumber << " " << numerator << "/" << denominator << endl;
	}

}
int main()
{
	Fraction f1(4, 5);
	Fraction  f2(7, 8);
	Fraction  Result;
	Fraction f3;

	f1.print();
	Result = f1 + f2;
	Result.print();
	Result = f1 - f2;
	Result.print();
	f3.setNumDenom(3, 5);
	f1.setNumDenom(23, 34);
	f1.print();
	Result = f3*f2;
	Result.print();
	Result = f2 / f3;
	Result.print();
	f2.getNumDenom();//Problem what exactly is suppose to happen here since im returning two numbers intseatd of one 

}