
/* Sum the numbers from 1 through 10 inclusive as follows */

#include <iostream>

int main(int argc, char* argv[])
{

	int sum = 0, val = 0;

	while (val <= 10)
	{
		sum += val;
		++val;
	}

	std::cout << "Sum of 1 to 10 inclusive is : " << sum << std::endl;
	return 0;

}


