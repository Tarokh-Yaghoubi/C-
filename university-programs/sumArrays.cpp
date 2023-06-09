/*

	Author : Tarokh Yaghoubi
	DatE : 

*/

#include <iostream>

using namespace std;

int main()
{
	int first[10];
	int second[10];
	int sum[10];

	cout << "Fill in the first array : \n";
	for (int i = 0; i < 10; ++i)
		cin >> first[i];

	cout << "Fill in the second array : \n";
	for (int i = 0; i < 10; ++i)
		cin >> second[i];

	for (int i = 0; i < 10; ++i)
		sum[i] = first[i] + second[i];

	for (int i = 0; i < 10; i++)
		cout << sum[i] << " ";

	return 0;
}
