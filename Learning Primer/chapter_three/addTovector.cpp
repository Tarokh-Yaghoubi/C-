

#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using std::vector;
using std::string;


void getInput();
void getInt();
void printVector(vector<int>& myVector);

int main()
{
	vector<int>v2;
	for (int i = 0; i != 100; ++i)
		v2.push_back(i);
	getInt();
}


void getInput()
{
	
	string word;
	vector<string> text;	// empty vector

	while (std::cin >> word && word != "z")
	{
		text.push_back(word);	// append word to text
	}	

}

void getInt()
{

	int number;
	vector<int> numbers;

	while (std::cin >> number && number != 'x')
	{
		if (number >= 0 || number <= 9)
			numbers.push_back(number);
	}

	printVector(numbers);
	std::cout << '\n';
	
	vector<int>::size_type len = 0;

	if (!numbers.empty())
		len = numbers.size();

	std::cout << len << std::endl;
}

void printVector(vector<int>& myVector)
{
	for (auto i : myVector)
		std::cout << i << " ";
}


	// vector<int> v{1,2,3,4,5,6,7,8,9};
	// for (auto &i : v)
	// for each element in v (note: i is a reference)
	// i *= i;
	// // square the element value
	// for (auto i : v)
	// for each element in v
	// cout << i << " "; // print the element
	// cout << endl;



