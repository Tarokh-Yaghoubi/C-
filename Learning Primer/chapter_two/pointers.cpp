
#include <iostream>

int main()
{
	int another_var = 45;
	int* otherptr = nullptr;
	void* voidptr = nullptr;
	int age = 16;
	int* ptr;
	int* intptr = nullptr;
	int voidval = 15;

	ptr = &age;
	otherptr = &another_var;
	voidptr = &voidval;

	std::cout << "The address ptr is holding is : " << ptr << std::endl;
	std::cout << "The address of ptr itself is : " << &ptr << std::endl;
	std::cout << "The address of age is : " << &age << std::endl;
	std::cout << "The value of address " << ptr << " is " << *ptr << std::endl;

	std::cout << "The address of otherptr is : " << &otherptr << std::endl;
	std::cout << "The value of otherptr is : " << *otherptr << std::endl;

	// Any nonezero evaluates as true
	
	intptr = static_cast<int*>(voidptr);

	std::cout << "The value of void ptr is : " << *intptr << std::endl;
	std::cout << "The address of intptr is : " << &intptr << std::endl;
	std::cout << "The address intptr is pointing to is : " << intptr << std::endl;
	std::cout << "The address voidptr is pointing to is : " << voidptr << std::endl;
	std::cout << "The address of voidptr itself is : " << &voidptr << std::endl;
	std::cout << "The address of voidval that voidptr is pointing to is : " << &voidval << std::endl;
	return 0;

}

