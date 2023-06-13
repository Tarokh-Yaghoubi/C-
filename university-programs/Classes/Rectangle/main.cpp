// Main Function

#include <iostream>
#include "rectangle.h"

int main()
{
	Rectangle rectangle1;
	rectangle1.setValue(10, 4);
	std::cout << "Area is : " <<  rectangle1.area() << std::endl;
	std::cout << "Perime is : " << rectangle1.perime() << std::endl;
	 
	system("PAUSE");
	return 0;

}

