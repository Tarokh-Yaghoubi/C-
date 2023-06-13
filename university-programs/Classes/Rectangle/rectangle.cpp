// Rectangle Class Definition 

#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle()
{
	// Constructor
}

int Rectangle::perime()
{
	return (len + width) * 2;
}

int Rectangle::area()
{
	return (len * width);
}

void Rectangle::setValue(int len, int width)
{
	this->len = len;
	this->width = width;
}

int Rectangle::get_width()
{
	return width;
}

int Rectangle::get_len()
{
	return len;
}

Rectangle::~Rectangle()
{
	std::cout << "Program Executed \n";
}

