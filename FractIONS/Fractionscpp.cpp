//class fraction source code 
#include "Fraction header.h"
#include <iostream>
using namespace std;
Fraction::Fraction(int numerator = 0, int denominator = 1) :
numerator(numerator), denominator(denominator) {}
Fraction Fraction::add(Fraction another)
{
	this->numerator = numerator*another.denominator + another.numerator*denominator;
	this->denominator = denominator *another.denominator;
	return(Fraction(numerator, denominator));
}
Fraction Fraction::subtract(Fraction another)
{
	if (this->numerator == another.numerator && this->denominator == another.denominator)
		this->numerator = 0;
	else
	{
		this->numerator = numerator*another.denominator - another.numerator*denominator;
		this->denominator = denominator *another.denominator;
	}
	return(Fraction(numerator, denominator));
}
Fraction Fraction::multiply(Fraction another)
{
	this->numerator = numerator * another.numerator;
	this->denominator = denominator * another.denominator;
	return(Fraction(numerator, denominator));
}
Fraction Fraction::divide(Fraction another)
{
	this->numerator = numerator* another.denominator;
	this->denominator = denominator *another.numerator;
	return(Fraction(numerator, denominator));
}
void Fraction::getNumDenom()
{
	this->numerator = numerator;
	this->denominator = denominator;
}
void Fraction::setNumDenom(int num, int denom)
{
	this->numerator = num;
	this->denominator = denom;
}
void Fraction::print()
{
	if (this->numerator == 0)
		cout << "0" << endl;
	else
		cout << numerator << "/" << denominator << endl;
}
int main()
{
	Fraction f1(4, 5);
	Fraction  f2(7, 8);

	f1.print();
	f1.add(f1).print();
	f1.add(f2).print();
	f1.subtract(f1);
	f1.print();

	f1.setNumDenom(23, 34);
	f1.multiply(f2);
	f2.getNumDenom();//Problem what exactly is suppose to happen here since im retuerning two numbers intseatd of one 

}
