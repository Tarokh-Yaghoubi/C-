
#include <iostream>
#include "rational.h"

int main()
{
	Rational rational_1;
	Rational rational_2;
	Rational result;
	
	rational_1.setValues(4, 2);
	rational_2.setValues(4, 2);

	result = rational_1.addition(rational_2);
	result.printRational();

	result = rational_2.addition(rational_1);
	result.printRational();
	
	result = rational_1.multiplication(rational_2);
	result.printAsDouble();

	system("pause");
	return 0;
}
