/*

	Tarokh (Jacob) Yaghoubi 

*/


#include <iostream>
#include <string>
#include <cstring>
#include <string>

using namespace std;

string ones[] = {

	" ", "one", "two", "three", "four", "five", "six",
	"seven", "eight", "nine","ten", "eleven", "twelve",
	"thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
	"nineteen"
};

string tens[] = { " ", " ", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };

void convertToWords(int num);

int main(int argc, char* argv[])
{
	
	// A program to take a number between one and a-hundred from terminal 
	// and return the english form of that 

	int num = 0;
	cout << "Type in a number , between 0 and 999999 :   ";
	cin >> num;

	convertToWords(num);

	
	return 0;

}

void convertToWords(int num)
{
	if (num < 0 || num > 999999)
	{
		cout << "\n Invalid Input \n";
		exit(1);
	}
	if (num == 0)
	{
		cout << "zero";
		return;
	}

	if (num >= 1000)
	{
		convertToWords(num / 1000);
		cout << "thousand ";
		num %= 1000;
	}

	if (num >= 100)
	{
		convertToWords(num / 100);
		cout << "hundred ";
		num %= 100;

	}
	
	if (num > 0)
	{
		if (num < 20)
			cout << ones[num] << " ";
		else
		{
			cout << tens[num / 10] << " ";
			num %= 10;
			if (num > 0)
				cout << ones[num] << " ";
		}
	}
}

