

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;

int main()
{

	int counter = 0;

	vector<string> text{"tarokh is a robot"};
	
	for(auto &c : text)
		if (isspace(text[c]))
			++counter;


	std::cout << "white spaces : " << counter << std::endl;

	return 0;

}

