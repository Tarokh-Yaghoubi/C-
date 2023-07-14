
#include <iostream>
#include <string>
#include <cctype>

using std::string;

int main2()
{

	string s("tarokh is a good man");

        for (auto &c : s)
		if (islower(c))
			c = toupper(c);
		


	std::cout << s << '\n';

	return 0;

}


int main()
{

	string s("upper case using pointers in C++");

	for (char* ptr = &s[0]; *ptr != '\0'; ptr++)
		if (islower(*ptr))
			*ptr = toupper(*ptr);

	std::cout << s << std::endl;

	return 0;

}

