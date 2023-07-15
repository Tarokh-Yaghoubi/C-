
#include <iostream>
#include <string>
#include <cctype>

using std::string;

int main()
{
	string s("tarokh shall not fall if he starts trying .");

	decltype(s.size()) len = (s.size() - 1);

	for (int i = 0; i <= len; ++i)
		std::cout << s[i];

	if (!s.empty())
	{
		s[0] = toupper(s[0]);
		std::cout << s[0] << std::endl;
	}

	for (auto &c : s)
		if (!s.empty())
			if (islower(c))
				c = toupper(c);

	std::cout << std::endl << s << std::endl;


	return 0;

}
