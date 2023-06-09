/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

int main()
{
	float score[10];
	for (int i = 0; i < 10; ++i)
		cin >> score[i];

	float max = score[0];
	for (int i = 1; i < 10; ++i)
		if (score[i] > max)
			max = score[i];

	cout << "The max score is : " << max << endl;
	return 0;
}
