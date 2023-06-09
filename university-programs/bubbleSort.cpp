/*

	Author : Tarokh Yaghoubi
	Date :

*/


#include <iostream>

using namespace std;

void bubbleSort(int[], int);

int main()
{
	int nums[10] = { 12, 100, 150, 95, 84, 63, 51, 17, 400, 23 };
	int len = sizeof(nums) / sizeof(nums[0]);
	bubbleSort(nums, len);
	
	for (int i = 0; i < len; ++i)
		cout << nums[i] << " ";

	return 0;
}

void bubbleSort(int numbers[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				numbers[j] ^= numbers[j + 1];
				numbers[j + 1] ^= numbers[j];
				numbers[j] ^= numbers[j + 1];
			}
		}
	}
}
