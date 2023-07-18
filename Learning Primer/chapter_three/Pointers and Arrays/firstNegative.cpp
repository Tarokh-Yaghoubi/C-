

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cctype>


using std::string;
using std::vector;
using std::begin;
using std::end;

int main(void)
{

	int arr[] = {0, 1, 2, 3, 4, -6, 7, 8, 9};
	int counter = 0;
	int *pbeg = begin(arr);
	int *pend = end(arr);

	while (pbeg != pend && *pbeg >= 0)
	{
		pbeg++;
		++counter;
	}
	std::cout << "Negative number index : " << counter << std::endl;
	std::cout << "Array is : " << std::endl;

	for (auto c : arr)
		std::cout << c << " ";
	std::cout << std::endl;

	return 0;

}

