// Take to integers and print the numbers between them 

/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

int main()
{

	int a, b;
	a = b = 0;

	std::cout << "Enter two numbers : " << std::endl;
	std::cin >> a >> b;

	while (a < b)
	{
		a++;
		std::cout << a << " ";
	}


	return 0;

}
