/*

	Author : Tarokh Yaghoubi
	Date :

*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, temp, sum = 0;

	cout << "Enter a number to see if it is armstrong or not : ";
	cin >> n;
	int digits = floor(log10(abs(n))) + 1;
	
	temp = n;
	while (temp != 0)
	{
		int each_digit = temp % 10;
		sum += pow(each_digit, digits);
		temp /= 10;
	}
	if (sum == n)
		cout << "The number " << sum << " is armstrong " << endl;

	system("pause");
	return 0;
}


int main2()
{
	int i, temp, sum = 0;
	int remainder;
	for (i = 100; i <= 999; ++i)
	{
		temp = i;
		while (temp != 0)
		{
			remainder = temp % 10;
			sum += pow(remainder, 3);
			temp /= 10;
		}
		if (sum == i)
			cout << "The number is armstrong { " << sum << " }" << endl;
	}

	return 0;
}

