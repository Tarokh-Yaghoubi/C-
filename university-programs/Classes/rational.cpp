// Definition of Class member methods 

#include <iostream>
#include "methods.h"


Rational::Rational()
{
	numinator = 14;
	denaminator = 16;
}

void Rational::setValues(int n, int d)
{
	numinator = n;
	denaminator = d;
}

Rational Rational::addition(Rational& a)
{
	Rational T;
	T.numinator = numinator * a.denaminator + a.numinator * denaminator;
	T.denaminator = denaminator * a.denaminator;
	return T; 
}

Rational Rational::subtraction(Rational& s)
{
	Rational T;
	T.numinator = numinator * s.numinator - s.numinator * denaminator;
	T.denaminator = denaminator * s.denaminator;
	return T;
}

Rational Rational::multiplication(Rational& m)
{
	Rational T;
	T.numinator = numinator * m.numinator;
	T.denaminator = denaminator * m.denaminator;
	return T;
}

Rational Rational::division(Rational& d)
{
	Rational T;
	T.numinator = numinator / d.numinator;
	T.denaminator = denaminator * d.denaminator;
	return T;
}

void Rational::printRational()
{
	std::cout << numinator << " / " << denaminator << std::endl;
}


void Rational::printAsDouble()
{
	std::cout << (float)numinator / denaminator << std::endl;
}
