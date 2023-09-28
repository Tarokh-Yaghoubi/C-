#include <iostream>
#include "cpp_constants.h"
/*
int main1()
{
	extern const int BUF_SIZE;
	int first = 512;
	const int bufferSize = first;	// you can not write to bufferSize anymore
	int second = bufferSize;	// it is allowed to write to second using a constant 

	const double pi = 3.14;

	const double* ptr = &pi;

	std::cout << "the value of the value that ptr pointing to is : " << *ptr << std::endl;

	const int reference_target = 4654;
	const int &referencetotarget = reference_target;
	// int &r2 = reference_target; 	// error
	// referencetotarget++;	// error
	double dval2 = 5.32;
	double dval = 4.125; 	// dval is a nonconst and its value can be changed 
	const double *ptr1 = &dval;	// ok: ptr1 is pointint to nonconst dval;
					// but you cannot change the value of dval 
					// through ptr1.	

	std::cout << dval << " " << *ptr1 << std::endl;
	ptr1 = &dval2;
	std::cout << dval2 << " " << *ptr1 << std::endl;

	std::cout << "The value of reference to target is : " << referencetotarget << std::endl; 
	std::cout << "The value of buffer size is : " << bufferSize << std::endl;
	std::cout << "The value of BUF_SIZE is : " << BUF_SIZE << std::endl;

	// we can have pointers that those themselves are consts, it means the value 
	// that they are holding 'that address they are holding' may not change .
	
       	int errNum = 0;
	int *const curErr = &errNum;	// curErr will always point to errNum;
	const double ppi = 33.144;
	const double* const pip = &ppi;	// pip is a const pointer to a const object;
	

	std::cout << "the value of ppi is : " << ppi << " " << *pip << std::endl;
	std::cout << "the value of errNum : " << errNum << " " << *curErr << std::endl;	


	constexpr int *np = nullptr;
	
	constexpr int j = 0;
	
	constexpr int i = 42; 		    
	
	constexpr const int *p = &i; 
	
	constexpr const int *p1 = &j;
	
	std::cout << i << " " << j << " " << *p << " " << *p1 << std::endl;

	return 0;
}

*/


#include <iostream>

constexpr int i = 42; // constexpr variable
constexpr int j = 0; // constexpr variable

int main() {
	constexpr const int* p = &i; // pointer to a constexpr variable
	const int* p1 = &j; // pointer to a non-constexpr variable
		      //
	std::cout << i << " " << j << " " << *p << " " << *p1 << std::endl;
		      //
	return 0;

}

 
