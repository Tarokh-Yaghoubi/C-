
#include <iostream>
#include <string>
#include <cctype>

using std::string;


int main()
{

	string s("Tarokh he is going to change ! ! !");

	decltype (s.size()) punct_count = 0;

	for (auto c : s)
		if(ispunct(c))
			++punct_count;

	std::cout << "Punctuation characters in s : " << punct_count << std::endl;

	return 0;

}

