
#include <iostream>

int main()
{
	int first = 48;
	const double number = 25.3;
	// double* ptr;
	// ptr = &number; 	// error 
	const double* ptr;

	int *const ptr1 = &first; // ptr1 will always point to first ; 
	const double* const ptr3 = &number; // a const pointer to a const object 
	ptr = &number;
	std::cout << "The address of ptr is : " << &ptr << std::endl;
	std::cout << "The address ptr is holding is " << ptr << std::endl;
	std::cout << "The value of ptr is : " << *ptr << std::endl;

	return 0;

}


