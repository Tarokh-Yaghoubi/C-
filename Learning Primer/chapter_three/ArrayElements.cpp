


#include <iostream>
#include <cctype>

void scores(void)
{
	unsigned scores[11] = {};	// 11 Buckets , all value initialized to 0
	unsigned grade;

	while (std::cin >> grade && grade != 'x')
	{
		if (grade <= 100)
			++scores[grade/10];
	}


	for (auto i : scores)
		std::cout << i << " ";

	std::cout << '\n';

}

int main()
{

	scores();
	return 0;
}

