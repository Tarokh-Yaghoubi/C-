#include <iostream>

using namespace std;

// tarokh yaghoubi @ github.com

int calculate(int);

int main()
{
    // write your code here

    int n;
    int result = 0;
    cout << "Enter the number of calls you had : " << endl;
    cin >> n;
    result = calculate(n);

    cout << "The result is : " << result << endl;
    system("pause");
    return 0;
}

int calculate(int calls)
{
    int ans = 0;
    if (calls <= 100)
        ans = (calls * 10) + 5000;
    else if (calls > 100)
        ans = ((calls - 100) * 5) + ((100 * 10) + 5000);
    
    return ans;
}