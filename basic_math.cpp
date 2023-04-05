#include <iostream>

using namespace std;

int main()
{
    int a, b, sum, sub, multiplication;
    float division;

    cout << "Enter the values for a and b : " << endl;
    cin >> a >> b;

    sum = a + b;
    sub = a - b;
    multiplication = a * b;
    division = (float) a / b;

    cout << "Sum = " << sum << endl;
    cout << "Sub = " << sub << endl;
    cout << "Div = " << division << endl;
    cout << "Multiplication = " << multiplication << endl;
    
    system("pause") ;
    return 0;

}