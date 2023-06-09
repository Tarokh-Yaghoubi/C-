/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

int main()
{
	int nums[10] = { 10, 9, 8, 50, 15, 13, 24, 100, 110, 15 };
	int i, j;
	int n = sizeof(nums)/sizeof(nums[0]);

	for (i = 0; i < n - 1; i++)
	{
		// the number of elements left to sort after the i-th pass 
		for (j = 0; j < n - i - 1; j++)
		{
			// Swap if the element found is greater than the next element
			if (nums[j] > nums[j + 1])
			{
				nums[j] ^= nums[j + 1];
				nums[j + 1] ^= nums[j];
				nums[j] ^= nums[j + 1];
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << nums[i] << " ";

	return 0;
}
