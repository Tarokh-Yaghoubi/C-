#include <iostream>

/* 

    Tarokh (Jacob) - Yaghoubi , Equilateral Triangle programmed in C++ 

*/
using namespace std;

int main()
{
   int n = 0;
   cout << "Enter the length of the triangle to get started : ... " << " ";
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
       for (int j = 0; j < n - i; j++)
            cout << " ";
       for (int k = 1; k <= i; k++)
            cout << "* ";
       
       cout << endl;
   }

   system("pause");
   return 0;
}