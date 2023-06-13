// Circle Class Definition 

#include <iostream>
#include "circle.h"

#define PI 3.14


float Circle::area()
{
	return PI * radius * radius;
}

float Circle::perime()
{
	return 2 * PI * radius;
}

void Circle::setRadius(float r)
{
	radius = r;
}

Circle::Circle()
{
	//
}
