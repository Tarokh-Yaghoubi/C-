/*

	Author : Tarokh  Yaghoubi
	Date :

	print this matrix :

	1	0	0	1
	0	1	1	0
	0	1	1	0
	1	0	0	1

*/

#include <iostream>

using namespace std;

void change_zeros_to_ones(int matrix[][4], int rows, int cols) {
    // Iterate through each element of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If the element is zero, change it to one
            if (i == j || (i + j == 3))
                matrix[i][j] = 1;
        }
    }
}

int main() {
    // Define a matrix of zeros
    int matrix[4][4] = { {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0} };

    // Change zeros to ones in the matrix
    change_zeros_to_ones(matrix, 4, 4);

    // Print the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
