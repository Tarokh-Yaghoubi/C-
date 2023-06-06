/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

#define PI 3.14

using namespace std;

int main()
{
	int r;
	float area;
	float perime;

	cout << "Radius : ";
	cin >> r;
	area = PI * r * r;
	perime = PI * 2 * r;

	cout << "Area " << area << endl;
	cout << "Perime " << perime << endl;

	system("pause");
	return 0;

}
