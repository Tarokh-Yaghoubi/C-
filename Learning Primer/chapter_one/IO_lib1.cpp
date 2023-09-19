// A program that uses the IO Library 

/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

int main()
{
	std::cout << "Enter two numbers : " << std::endl;
	int v1 = 0, v2 = 0;
	if (v1 == 0)
		std::cerr << "This is an error message \n";		/* CERR Test */
 
	std::cin >> v1 >> v2;
	std::cout << "The sum of v1 and v2 is " << v1 + v2 << std::endl;

	return 0;
}

