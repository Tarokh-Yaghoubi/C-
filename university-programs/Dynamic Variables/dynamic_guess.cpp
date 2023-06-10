/*

	Author : Tarokh Yaghoubi
	DatE :

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
	int secret = rand() % 10 + 1;	// generate a random number

	int* guesses = new int[100];	// Allocate memory for guesses 

	int n = 0;

	cout << "Guess a number between 1 and 10 " << endl;

	while (true)
	{
		int guess;
		cout << "Guess : ";
		cin >> guess;
		guesses[n++] = guess;

		if (guess == secret)
			break;
	}

	cout << "You guessed the number in " << n << " tries" << endl;

	delete[] guesses;	// deallocate memory

	return 0;
}
