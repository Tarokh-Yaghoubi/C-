

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;

int main()
{
	vector<int>text{"THE CAKE IS A FAke, tarokh is a bad man"};
	string title("tarokh");

	decltype(text.cbegin()) beg = text.cbegin(), end = text.cend();
	decltype(text.cbegin()) mid = text.cbegin() + (end - beg) / 2;	// Original MidPoint
	
	while (mid != end && *mid != title)
	{
		if (title < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	std::cout << *mid << " ";

	return 0;

}


		
