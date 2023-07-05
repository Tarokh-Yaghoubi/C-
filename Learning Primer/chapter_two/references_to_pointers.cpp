
#include <iostream>

int main()
{
	int first = 54;
	int* ptr;



	int i = 10;
	int *p;

	int *&r = p;	// r is a reference to pointer p ;
	r = &i;
	
	int *&ptrref = ptr;
	ptrref = &first;

	std::cout << "the address that ptr is holding is : " << ptr << std::endl;
	std::cout << "the address ptrref is referencing is : " << ptrref << std::endl;
	std::cout << "the value of ptrref is referencing is : " << *ptrref << std::endl;	

	*r = 41;

	std::cout << "the address of reference r is : " << r << std::endl;
	std::cout << "the value of reference r is : " << *r << std::endl;
	return 0;

}


