/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

int main()
{
	int remainder;
	int sum = 0;
	int num;

	cout << "Enter a number : ";
	cin >> num;
	int tmp = num;
	while (tmp != 0)
	{
		remainder = tmp % 10;
		tmp /= 10;
		sum += remainder;
	}
	cout << "Sum of the digits of " << num << " is " << sum << endl;
	return 0;
}
