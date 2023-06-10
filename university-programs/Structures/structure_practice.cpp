/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <string>

using namespace std;

struct Date {
	int year;
	string month;
	int day;
};

struct Student {
	
	string ST_NO;
	string ST_FAMILY;
	float ST_AVERAGE;
	Date ST_DATE;
};


int main()
{
	int a;
	Student student;
	student = { "55756", "Tarokh", 18.5 };
	student.ST_DATE.day = 3;
	student.ST_DATE.month = "june";
	student.ST_DATE.year = 2004;

	cout << student.ST_NO << " " << student.ST_FAMILY << " " << student.ST_AVERAGE << endl;
	cout << student.ST_DATE.day << " " << student.ST_DATE.month << " " << student.ST_DATE.year << endl;

	return 0;
}
