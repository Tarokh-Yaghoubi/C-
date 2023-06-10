/*/

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile();
void readFile();


int main()
{

	string word;
	string* words = new string[100];	// allocate memory for words 
	int n = 0, count = 0;

	writeFile();

	ifstream fin("output_file.txt");	// Open input file 

	while (fin >> word) {
		words[n++] = word;	// store words in the array 
	}

	fin.close();	

	cout << "Enter a word to search for : ";
	cin >> word;

	for (int i = 0; i < n; i++) {
		if (words[i] == word)
		{
			count++;
		}
	}

	cout << "The word " << word << " appears " << count << " times in the file . " << endl;

	delete[] words;
	words = NULL;		// to avoid dangling pointer 


	return 0;
}



void writeFile()
{
	ofstream outfile("output_file.txt");	// Opening a file for writing

	if (!outfile) {		//	Check if the file opening is successful 

		cout << "Error opening file";
		exit(1);
	}

	// write some text inside of the file stream

	outfile << "First line of the file \n";
	outfile << "This is a test \n";
	outfile << "Good Bye \n";

	outfile.close();

	readFile();

}

void readFile()
{
	string line;

	ifstream infile("output_file.txt");	// Opening a file for reading 

	if (!infile)
	{
		cout << "Error opening the file \n";
		exit(1);
	}

	while (getline(infile, line)) {	// loop through each line of the file 

		cout << line << endl;
	}

	infile.close();

}

