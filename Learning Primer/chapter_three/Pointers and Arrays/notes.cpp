
#include <iterator>
#include <iostream>
#include <string>

using std::string;

int main()
{

	string nums[] = {"one", "two", "three"};
	string *p = &nums[0];
	string *p2 = nums;	// equivalent to p2 = &nums[0];

	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto ia2(ia);	// ia2 is an int* that points to the first element in ia
	ia2 = 42;	// error: ia2 is a pointer, and we cant assign an int to a pointer
	auto ia3(&ia[0]);	// this makes the ia2 initialization expression clear ! 
	
	// this conversion does not happen when we use decltype() 
	// the type returned by decltype(ia) is array of ten ints 
	
	int i = 5;
	decltype(ia) ia4 = {11, 15, 14, 0, 13, 32, 16, 18, 94, 62};
	ia4[2] = i;	// ok: assigns the value of i to an element in ia4
	
       	int *p = ia;
	int *e = &ia[10];	// pointer just past the last element in the array 
	
	for (p = ia; p != e; ++p)
		std::cout << *p << " ";

	std::cout << *p << std::endl;
	p++;
	std::cout << *p << std::endl;

	return 0;

}

 
