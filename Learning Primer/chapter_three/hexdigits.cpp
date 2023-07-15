

#include <iostream>
#include <string>
#include <cctype>

using std::string;

int main()
{
	const string hexdigits = "0123456789ABCDEF"; 	// Possible hex digits 
	
	std::cout << "Enter a series of numbers between 0 and 15"
		  << " seperated by spaces . Hit ENTER when finished : "
		  << std::endl;

	string result;

	string::size_type n;

	while (std::cin >> n && n != 'z')
		if (n < hexdigits.size())
			result += hexdigits[n];

	std::cout << "Your Hex Number is : " << result << std::endl;

	return 0;

}


