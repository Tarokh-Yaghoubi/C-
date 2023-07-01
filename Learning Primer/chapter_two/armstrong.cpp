

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    int n;
    int temp;
    int sum = 0;
    int number_of_digits;

    cout << "Enter a number to see if it is armstrong or not : ";
    cin >> n;

    number_of_digits = floor(log10(abs(n))) + 1;

    temp = n; // 153


    while(temp != 0)
    {
        int each_digit = temp % 10;
        sum += pow(each_digit, number_of_digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an armstrong number " << endl;
    
    else
        cout << "FUCK YOU";

    
    return 0;

    
}
