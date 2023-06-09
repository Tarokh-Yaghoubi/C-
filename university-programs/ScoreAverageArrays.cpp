/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <iomanip>

using namespace std;

float calculate(float[], int);

int main() {

	float scores[10];
	float sum = 0;

	// Input 10 scores from the user
	cout << "Enter 10 student scores:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> scores[i];
		// sum += scores[i];
	}

	// Calculate and print the average score
	float average = calculate(scores, 10);
	cout << "The average score is: " << average << endl;
	return 0;
}

float calculate(float score[], int len)
{
	float sum = 0;
	for (int i = 0; i < len; i++)
		sum += score[i];

	float average = sum / len;
	return average;

}
