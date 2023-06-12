
#include <iostream>
#include "rational.h"

int main()
{
	Rational rational_1;
	Rational rational_2;
	Rational rational_3;
	Rational rational_4;

	rational_1 = rational_3.addition(rational_2);
	rational_4 = rational_3.multiplication(rational_2);

	rational_1.printRational();
	rational_4.printRational();
	rational_1.printAsDouble();

	system("pause");
	return 0;
}
