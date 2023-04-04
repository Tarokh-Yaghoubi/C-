#include <iostream>

using namespace std;

float solve(int a);

int main()
{
    int a = 0;
    float ans;
    cout << "Please enter a number : " << endl;
    cin >> a;
    ans = (float)solve(a);
    cout << "Equation solved , the result is : " << ans << endl;

    system("pause");
    return 0;
}

float solve(int a)
{
    float y;
    y = (float)(a * a) + (20 + 1) / 2;
    return y;
}