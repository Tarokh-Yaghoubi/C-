/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

void swap(int&, int&);

int main()
{
	int x, y;
	x = 65;
	y = 42;
	swap(x, y);
	cout << "X is " << x << " Y is " << y << endl;

	return 0;
}

void swap(int& first, int& second)
{
	first ^= second;
	second ^= first;
	first ^= second;
}
