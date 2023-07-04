
#include <iostream>


int main()
{
	int first = 15;
	int &ref = first;
	std::cout << first << " " << ref << std:: endl;
	std::cout << first << " " << &ref << std::endl;
	return 0;

}
