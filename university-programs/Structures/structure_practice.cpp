/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <string>

using namespace std;

struct Student {
	
	string ST_NO;
	string ST_FAMILY;
	float ST_AVERAGE;
};

int main()
{
	int a;
	Student student;
	student = { "55756", "Tarokh", 18.5 };

	cout << student.ST_NO << " " << student.ST_FAMILY << " " << student.ST_AVERAGE << endl;

	return 0;
}
