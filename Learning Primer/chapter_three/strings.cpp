#include <iostream>
#include <string>

using std::string;

int main()
{

	string s1;
//	string s2 = s1;
//	string s2(s1);

	string s3 = "tarokh";
	string s4(10, 'c');

	string s5 = "copy initialization of tarokh";
	string s6("direct initialization tarokh");
	string s7(10, 'a');

	std::cout << "the size of s3 is : " << s3.size() << std::endl;	
	

//	while (std::cin >> s1)
//		std::cout << s1 << std::endl;


	auto len = s1.size();
	std::cout << "the size of s1 is : " << len << std::endl;

	while (getline(std::cin, s1))
	{

		if (s1.empty() || s1.size() < 10)
		//	std::cout << s1 << std::endl;
			continue;
		std::cout << s1 << std::endl;
				
	}

	
	return 0;

}


