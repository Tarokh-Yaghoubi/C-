/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <cmath>

using namespace std;

int isArmstrong(int);

int main()
{
	int n;
	cout << "Enter a number : ";
	cin >> n;

	if (isArmstrong(n) == 1)
		cout << "It is armstrong";
	else
		cout << "It is not armstrong";

	return 0;
}

int isArmstrong(int n)
{
	int remainder;
	int sum = 0;
	int temp;
	temp = n;
	int numDigits = floor(log10(abs(n))) + 1;

	while (temp != 0)
	{
		remainder = temp % 10;
		sum += pow(remainder, numDigits);
		temp /= 10;
	}
	if (sum == n)
		return 1;
	else
		return -1;
}
