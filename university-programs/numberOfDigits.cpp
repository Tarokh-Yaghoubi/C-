/*

	Author : Tarokh Yaghoubi
	Date : 

*/

#include <iostream>
#include <cmath>

using namespace std;

int main_2(int argc, char* argv[])
{
	// my algorithm

	int n;
	cin >> n;
	int ndigit = floor(log10(abs(n))) + 1;
	cout << ndigit;
	return 0;
}

int main()
{

	// Others 

	int n;
	cout << "Enter a number : ";
	cin >> n;
	int counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	cout << counter;
	return 0;
}
