/*
 *
 *	Author : Tarokh Yaghoubi
 *	Date : 30 June
 *
 */


#include <iostream>

int reused = 10;

int main(int argc, char* argv[])
{

	int unique = 0;

	std::cout << reused << " " << unique << std::endl;

	int reused = 0;

	std::cout << reused << " " << unique << std::endl;

	// This one is pointing to the reused variable outside of the scope (outside of main)
	std::cout << ::reused << " " << unique << std::endl;

	return 0;

}


