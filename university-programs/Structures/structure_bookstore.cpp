/*

	Author : Tarokh Yaghoubi
	DatE :

*/

#include <iostream>
#include <string>

using namespace std;

struct Book {

	string B_Name;
	int price;
	int pageNum;

};

int main()
{
	int best;
	Book book_list[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> book_list[i].B_Name;
		cin >> book_list[i].price;
		cin >> book_list[i].pageNum;
	}

	best = 0;

	for (int i = 1; i < 4; i++)
	{
		if (book_list[i].price > book_list[best].price)
			best = i;
	}

	cout << "The best selling and most expensive book is : \n";
	cout << book_list[best].B_Name << endl;
	cout << book_list[best].price << endl;
	cout << book_list[best].pageNum << endl;

	system("pause");
	return 0;
}
