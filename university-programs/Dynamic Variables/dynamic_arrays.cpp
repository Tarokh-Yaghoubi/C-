/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array : ";
	cin >> n;

	int* arr = new int[n];	// Dynamic Allocation of Array - Allocated memory on Heap Memory 

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	delete[] arr;	// Deallocate the memory / If you do not deallocate , you may cause memory leak ;
	
	return 0;

}
