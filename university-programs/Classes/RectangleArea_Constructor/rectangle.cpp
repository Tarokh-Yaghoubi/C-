
#include "rectangle.h"

Rectangle::Rectangle()
{
	//
}

Rectangle::Rectangle(int len, int width)
{
	float area, perime;
	this->len = len;
	this->width = width;
	area = (this->len + this->width) * 2;
	perime = (this->len * this->width);
	
	std::cout << "The area is : " << area << " The perime is " << perime << std::endl;

}

Rectangle::~Rectangle()
{
	std::cout << "Program Executed \n";
}
