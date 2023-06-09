/*

	Author: Tarokh Yaghoubi
	Date:

*/


#include <iostream>

using namespace std;

int main()
{
	int n, reverse = 0, remainder;

	for (int i = 100; i <= 900; i++)
	{
		n = i;
		reverse = 0;
		while (n != 0)
		{
			remainder = n % 10;
			reverse = reverse * 10 + remainder;
			n /= 10;
		}
		if (reverse == i)
			cout << "Armstrong number is : " << reverse << endl;
	}

	system("pause");
	return 0;
}

