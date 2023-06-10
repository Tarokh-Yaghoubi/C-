/*

	Author : Tarokh Yaghoubi
	Date : 6/10/2023

*/

#include <iostream>

using namespace std;

int main()
{
	
	int** ptr;
	int a = 65;
	void* vptr;
//	int a = 5;
	int b = 3;
//	char character = 'A';
	int* number[2] = { &b, &a };
//	vptr = &a;
	vptr = &b;
//	vptr = &character;
//	cout << *((int*)vptr);
//	cout << *((int*)vptr) << endl;
//	cout << *((char*)vptr);

	ptr = &number[0];
	cout << **ptr << endl;
	ptr++;
	cout << **ptr;
	
	return 0;

}
