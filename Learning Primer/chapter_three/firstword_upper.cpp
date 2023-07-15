
#include <iostream>
#include <string>
#include <cctype>

using std::string;

int main()
{
	string s("some text");

	decltype (s.size()) len = s.size();

	for (decltype (s.size()) index = 0; index != len && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);	// capitalize the current character
	 
	std::cout << s << std::endl;

	return 0;

}

