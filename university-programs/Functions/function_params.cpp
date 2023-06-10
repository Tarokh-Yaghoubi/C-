/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>

using namespace std;

void GetMultipleValues(int& value1, int& value2);
void GetMultipleValuesPointer(int* value_1, int* value_2);

	// You can definfe a struct that has multiple values and return that struct from a function 
	
struct MultipleValuesStruct
{
	int first;
	int second;
};

MultipleValuesStruct GetMultipleValuesStruct()
{
	MultipleValuesStruct value;
	value.first = 45;
	value.second = 86;
	return value;
}

int main()
{
	int x, y;
	GetMultipleValues(x, y);
	GetMultipleValuesPointer(&x, &y);
	MultipleValuesStruct values = GetMultipleValuesStruct();

	cout << "X is " << x << " Y is " << y << endl;
	cout << "first value is " << values.first << " Second value is " << values.second << endl;

	system("pause");
	return 0;
}

	//	Pass by Reference  

void GetMultipleValues(int& value1, int& value2)
{
	value1 = 20;
	value2 = 40;
}

	//  Pass by Pointer

void GetMultipleValuesPointer(int* value_1, int* value_2)
{
	*value_1 = 465;
	*value_2 = 142;
}

