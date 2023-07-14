#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int f()
{
	return 0;
}


int main()
{
	constexpr int mf = 15;
	typedef int uint45;
	using ufloat45 = float;

	uint45 first = 469;
	ufloat45 second = 42.3;

	decltype (f()) sum = first;

        const int* const ptr = &mf;
	cout << "The value of mf is : " << mf << endl;
	cout << "The value of the variable ptr is pointing to is : " << *ptr << endl;

	cout << first << "  " << second << endl;
	cout << "The value of sum using decltype is : " << sum << endl;
	return 0;

}	
