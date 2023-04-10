#include <iostream>

using namespace std;


// tarokh yaghoubi @ github.com

int max(int a, int b, int c);

int main()
{
    int a, b, c;
    int ans = 0;
    cout << "Enter the values of a, b, c :" << endl;
    cin >> a >> b >> c;
    ans = max(a, b, c);

    cout << "The answer is : " << ans << endl;
    system("pause");
    return 0;
}

int max(int a, int b, int c)
{
    int max = 0;

    max = a;
    if (b > max)
        max = b;
    else if (c > max)
        max = c;
    
    return max;
}