/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	int n, m;

	cout << "Enter the size of the two-dimensional Array : ";
	cin >> n >> m;

	int** arr = new int* [n];	// Dynamic Allocation 

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];	// Allocate each row 

	// Fill the array with random numbers
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = rand() % 100;	// Limit the range of random numbers

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << arr[i][j] << " ";
		
		cout << "\n";
	}

	// deallocate the memory

	for (int i = 0; i < n; i++)
		delete[] arr[i];		// delete each row 

	delete[] arr;	// delete the row pointer 

	return 0;

}
