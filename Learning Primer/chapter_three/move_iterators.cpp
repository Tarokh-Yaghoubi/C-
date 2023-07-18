

#include <iostream>
#include <vector>
#include <string>
#include <cctype>


using std::string;
using std::vector;

void doupper();
void cbegin_test();

int main(void)
{
	string s("This is just an example");

	for (decltype(s.begin()) it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);

	std::cout << s << " " << std::endl;
	doupper();
	cbegin_test();
	return 0;

}


void doupper()
{

	string str("tarokh is a good sick man");

	for (auto &c : str)
	{
		c = toupper(c);
		if (isspace(c))
			break;
	}

	std::cout << str << " " << std::endl;


}


void cbegin_test()
{

	vector<string> text{"This is a test text by Tarokh"};

	for (decltype(text.cbegin()) it = text.cbegin(); it != text.cend() && !(*it).empty(); ++it)
		std::cout << *it << std::endl;

}



