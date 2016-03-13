//class fraction header 
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction(int, int);//Construtor
	Fraction operator+(const Fraction& another);
	Fraction operator-(const Fraction& another);
	Fraction operator*(const Fraction& another);
	Fraction operator/(const Fraction& another);
	void getNumDenom();
	void setNumDenom(int, int);
	void print();
};
