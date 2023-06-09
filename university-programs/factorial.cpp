/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	int Fac = 1;
	int i = 1;

	cout << "Enter a number : ";
	cin >> a;

	for (; i <= a; ++i)
		Fac = Fac * i;

	cout << "Factorial = " << Fac << endl;
	system("pause");

	return 0;
}

