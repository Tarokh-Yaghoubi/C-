

#include <iostream>
#include <cctype>
#include <vector>

using std::vector;

void printVector(vector<unsigned>& scores);
void printFloatVector(vector<float>& columns);

int main()
{
	vector<float>columns{0.9, 10.19, 20.29, 30.39, 40.49, 50.59, 60.69, 70.79, 80.89, 90.99, 100.0};
	vector<unsigned> score(11, 0);
	unsigned grade;

	while (std::cin >> grade && grade != 'x') {

		if (grade <= 100)
			++score[grade/10];
	}
	
	printFloatVector(columns);
	printVector(score);
	return 0;
}

void printVector(vector<unsigned>& scores)
{
	for (auto c : scores)
		std::cout << c << " ";

	std::cout << '\n';

}

void printFloatVector(vector<float>&columns)
{
	for (auto c : columns)
		std::cout << c << " ";
	std::cout << '\n';

}

