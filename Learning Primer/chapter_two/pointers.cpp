
#include <iostream>

int main()
{
	int another_var = 45;
	int* otherptr = nullptr;

	int age = 16;
	int* ptr;

	ptr = &age;
	otherptr = &another_var;

	std::cout << "The address ptr is holding is : " << ptr << std::endl;
	std::cout << "The address of ptr itself is : " << &ptr << std::endl;
	std::cout << "The address of age is : " << &age << std::endl;
	std::cout << "The value of address " << ptr << " is " << *ptr << std::endl;

	std::cout << "The address of otherptr is : " << &otherptr << std::endl;
	std::cout << "The value of otherptr is : " << *otherptr << std::endl;

	// Any nonezero evaluates as true 

	return 0;

}
