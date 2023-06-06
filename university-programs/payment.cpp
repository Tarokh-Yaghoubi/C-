/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

// #define PERCENTAGE(a, b) (10 / 100)

using namespace std;

int main()
{
	// const int PERCENT = PERCENTAGE();

	float netPay;
	int gross, pay, hour;
	
	cout << "Enter how many hours you have worked : ";
	cin >> hour;

	cout << "Enter the payment amount for each hour : ";
	cin >> pay;

	gross = pay * hour;		// This  salary is not pure 
	netPay = (gross - (float)(gross * 10 / 100));

	cout << "Gross Pay " << gross << endl;
	cout << "Net Pay " << netPay << endl;

	system("pause");

	return 0;
}

