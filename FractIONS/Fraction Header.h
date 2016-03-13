//class fraction header 
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int, int);//Construtor
	Fraction add(Fraction);
	Fraction subtract(Fraction);
	Fraction multiply(Fraction);
	Fraction divide(Fraction);
	void getNumDenom();
	void setNumDenom(int, int);
	void print();
};
