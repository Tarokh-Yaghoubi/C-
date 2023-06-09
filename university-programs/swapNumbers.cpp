/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

void swap(int&, int&);

int main(int argc, char* argv[])
{
	int a = 10, b = 50;
	swap(a, b);
	cout << "a is " << a << " b is " << b;
	return 0;
}

void swap(int& a, int& b)
{
	if (a != b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
}
