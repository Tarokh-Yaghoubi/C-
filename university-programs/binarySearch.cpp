/*

	Author : Tarokh Yaghoubi
	DatE :

*/

#include <iostream>
#include "functions.h"

using namespace std;

int binarySearch(int[], int, int, int);

int main()
{
	int number;
	int nums[10] = { 12, 14, 15, 20, 35, 15, 14, 16, 18, 50 };
	int len = sizeof(nums) / sizeof(nums[0]);
	bubbleSort(nums, len);

	for (int i = 0; i < len; ++i)
		cout << nums[i] << " ";

	cout << "\n";
	cout << "Enter the number you are searching for : ";
	cin >> number;

	int ans = binarySearch(nums, 0, len - 1, number);

	cout << "The answer is " << ans << endl;

	return 0;
}
