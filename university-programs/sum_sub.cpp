/*

	Author : Tarokh Yaghoubi
	Date : 

*/

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int a, b, sub, sum, multiply;
	float division;

	cout << "Enter two numbers : ";
	cin >> a >> b;
	sum = a + b;
	sub = a - b;
	multiply = a * b;
	division = (float)a / b;

	cout << "Sum " << sum << endl;
	cout << "Sub " << sub << endl;
	cout << "Multiplication " << multiply << endl;
	cout << "Division " << setprecision(2) << division << endl;

	system("pause");
	return 0;
}