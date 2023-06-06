/*

	Author : Tarokh Yaghoubi
	Date : 

*/

#include <iostream>

using namespace std;

int main()
{

	int a;
	float y;

	cout << "Enter the value for a : ";
	cin >> a;

	y = (float)(a * a + (2 * a) + 1) / 2;
	cout << "The value of y is : " << y << endl;

	system("pause");
	return 0;
}