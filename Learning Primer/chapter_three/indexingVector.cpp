

#include <iostream>
#include <cctype>
#include <vector>

using std::vector;

void printVector(vector<int>& ivec);

int main()
{

	vector<int> ivec(10, 0);
/*	vector<int> ivec;	note : empty vector , DISASTER , IVEC has not ELEMENTS	*/
	// if you declare your vector like this you HAVE to use push_back for adding 
	// value to the vector  
	for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
		ivec[ix] = ix;
		// ivec.push_back(ix);

/*
 * 	The subscript operator on vector (and string) fetches an existing el-
 * 	ement; it does not add an element. but push_back will add an element with 
 * 	value ix
*/

	printVector(ivec);

	return 0;
}

void printVector(vector<int>& ivec)
{

	for (auto c : ivec)
		std::cout << c << " ";

	std::cout << '\n';

}


