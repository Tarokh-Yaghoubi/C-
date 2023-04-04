#include <iostream>

using namespace std;

bool isTriangle(int, int, int);

int main()
{
    int a, b, c;
    bool ans;
    cout << "Enter the values of a, b and c : " << endl;
    cin >> a >> b >> c;
    if (isTriangle(a, b, c))
    {
        cout << "it is a triangle" << endl;
    }
        
    else
    {
        cout << "it is not a triangle" << endl;
    }
    
    system("pause");
    return 0;
}

bool isTriangle(int a, int b, int c)
{
    bool answer = true;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        answer = true;
    }
       
    else {
        answer = false;
    }

    return answer;
}