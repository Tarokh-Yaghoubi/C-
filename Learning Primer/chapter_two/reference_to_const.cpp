

#include <iostream>

int main()
{

	const int first = 45;
	const int second = 65;

	const int &first_reference = first;
	const int &second_reference = second;

	std::cout << "The value of first reference is : " << first_reference << std::endl;
	std::cout << "The value of second reference is : " << second_reference << std::endl;
	std::cout << "The value of first itself is : " << first << std::endl;
	std::cout << "The value of second itself is : " << second << std::endl;

	return 0;

}

