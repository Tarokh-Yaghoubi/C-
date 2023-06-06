/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

#define MAX 10

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i <= MAX; ++i)
		sum += i;
	cout << "Sum " << sum << endl;
	return 0;
}