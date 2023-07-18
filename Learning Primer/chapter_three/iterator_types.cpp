
#include <iostream>
#include <vector>
#include <string>
#include <cctype>


using std::string;
using std::vector;

int main(void)
{
	vector<int> v;

	vector<int>::iterator it;	// It can read and write vector<int> elements 
	string::iterator it2;		// it2 can read and write characters in a string 
	vector<int>::const_iterator it3;	// it3 can read but not write elements 
	string::const_iterator it4;		// it4 can read but not write characters
	
	/*
	
	   If a vector or string is
	   const, we may use only its const_iterator type. With a nonconst vector
	   or string, we can use either iterator or const_iterator.	
	
	*/

	decltype(v.begin()) it1 = v.begin();
	decltype(v.begin()) it3 = v.cbegin();	// it3 has the type vector<int>::const_iterator

	(*it1).empty();



}



