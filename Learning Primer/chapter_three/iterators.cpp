

#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using std::vector;
using std::string;
/*
void main2()
{

	string s("some string");
	if (s.begin() != s.end())
	{
		
		auto it = s.begin();
		*it = toupper(*it);
	}

	std::cout << s << " " << std::endl;

}
*/

int main()
{

	string str("t");

	

	std::cout << &(str.begin()) << std::endl;
	std::cout << &(str.end());

	return 0;
}



