// main function , Circle Class 

#include <iostream>
#include "circle.h"

int main(int argc, char* argv[])
{
	Circle circle1;

	circle1.setRadius(5.0);
	std::cout << circle1.area() << std::endl;
	std::cout << circle1.perime() << std::endl;

	system("pause");
	return 0;
}
