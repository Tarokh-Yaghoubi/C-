/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string result;
	int number;
	cout << "Enter the number to see if it is odd or even : ";
	cin >> number;
	result = (number % 2 == 0) ? "Even" : "Odd";
	cout << result;

	system("pause");
	return 0;

}
