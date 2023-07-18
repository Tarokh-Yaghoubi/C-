

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;

int main(void)
{

	unsigned cnt = 42;
	constexpr unsigned sz = 42;

	int arr[10];	// array of ten integers
	int* ptr[sz];	// array of 42 pointers to int 
	string bad[cnt];	// error: cnt is not a constant expression 
	string strs[get_size()]; // ok if get_size() is constexpr , error otherwise 
				 
	/*
	 *	note : we can not initialize an array as a copy of another array 
	 *	and also it is not legal to assign one array to another . 
	 *
	 *
	 *	note : some compilers allow array assignment as a Compiler Extension 
	 *	but it is a good idea to avoid using non-standard features because 
	 *	when you do such a thing your program will be limited to that specific 
	 *	compiler and will not compiler with other compilers .
	 *
	 */


	// like Vectors ; Arrays can hold objects of most every type . 
	// we can have an array of pointers and also we can define both 
	// pointers and references to arrays (because an array is an object)
	
	int* ptrs[10]; 	// ptr is an array of ten pointers to int 
	int &refs[10];	// error: No Arrays of references 
	int (*Parray)[10] = &arr;	// Parray points to an array of ten ints 
	int (&arrRef)[10] = arr;	// arrRef refers to an array of ten ints
	

	int *(&arrRefPtr)[10] = ptrs;	// arrRefPtr is a reference to an array of ten pointers to int
	

	return 0;

}
