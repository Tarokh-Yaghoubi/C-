#include <iostream>

using namespace std;

bool isRightTriangle(int, int, int);

int main()
{
    int a, b, c;
    cout << "Enter the values of a, b and c : " << endl;
    cin >> a >> b >> c;
    if (isRightTriangle(a, b, c))
        cout << "it is a right-triangle" << endl;
    else cout << "it is not a right-triangle" << endl;

    system("pause");
    return 0;
}

bool isRightTriangle(int a, int b, int c)
{
    bool answer = false;

    if ((a * a + b * b == c * c)||(a * a + c * c == b * b)||(c * c + b * b == a * a))
        answer = true;
    else
        answer = false;

    return answer;
}