#include <iostream>
#include <cmath>
#include <cctype>


using namespace std;

int larger(int first, int second)
{
	int temp;
	if (first > second)
		temp = first;
	else
		temp = second;

	return temp;
}

char get_char()
{
	char a;
	cout << "Type in a character : ... " << endl;
	a = getchar();
	
	if (islower(a))
		a = toupper(a);

	return a;
}

int main(int argc, char* argv[])
{

	char ans;

	cout << larger(10, 12) << endl;
	cout << larger(100, 122) << endl;
	cout << larger(106, 102) << endl;

	cout << endl << "-------------------" << endl;

	ans = get_char();

	cout << ans << endl;

	system("PAUSE");
	return 0;

}