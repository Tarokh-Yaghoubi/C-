/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

struct Complex {

	int real;
	int imaginary;

};

int main()
{
	Complex number1, number2, sum;

	cout << "Enter two complex numbers : ";
	cin >> number1.real >> number1.imaginary;
	cin >> number2.real >> number2.imaginary;
	sum.real = number1.real + number2.real;
	sum.imaginary = number1.imaginary + number2.imaginary;

	cout << "Sum = " << sum.real << " i " << sum.imaginary << endl;

	return 0;
}