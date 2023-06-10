/*
	
	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std; 


int main()
{
	int* ptr;
	ptr = new int;

	/*
	
		In this example, the new operator allocates space on the heap for an integer,
		and returns the memory address of that space. The address is then saved in p.
		We can use p to access or change the value of the dynamically allocated integer.

	*/
	int n = 65;
	cout << *ptr << endl;		// using uninitialized memory 
	cout << &ptr;

	/*
		
		the main difference between simple pointers and dynamic variables is that , dynamically allocated variables
		are allocated on the heap memory and their lifetime is not tied to the lifetime of the function or block which
		they are declared , they need to be manually deallocated using the delete operator when they are no longer needed
		otherwise a " memory leak " may occur ! 
	
	*/

	ptr = &n;
	*ptr = 659;
	cout << *ptr << endl;

	delete ptr;		// you shall cause memory leak if you do not deallocate the memory
	ptr = NULL;	

	return 0;

}