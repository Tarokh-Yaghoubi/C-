#ifndef RATIONAL_CLASS

#define RATIONAL_CLASS

// Class Declaration 

class Rational {

private:
	int numinator;
	int denaminator;

public:

	Rational addition(Rational&);
	Rational subtraction(Rational&);
	Rational multiplication(Rational&);
	Rational division(Rational&);

	Rational();

	void setValues(int, int);
	void printRational();
	void printAsDouble();
	//void Reduction();

};


#endif