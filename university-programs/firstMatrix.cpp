/*

	Author : Tarokh Yaghoubi
	Date : 

	a program to print this matrix :

	1	0	0	0
	0	1	0	0
	0	0	1	0
	0	0	0	1


*/

#include <iostream>

using namespace std;

int main()
{
	int matrix[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		cout << "\t";
		for (int j = 0; j < 4; ++j)
		{
			if (i == j)
				matrix[i][j] = 1;

			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;

}
