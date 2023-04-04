#include <iostream>

using namespace std;

void sp_to_dash(const char*);

int main()
{
    char* sentence = "this is my sixth program in c plus plus";
    sp_to_dash(sentence);
    system("pause");
    return 0;
}

void sp_to_dash(const char* str)
{
    while (*str)
    {
        if (*str == ' ') cout << "-";
        else cout << *str;
        str++;
    }
    cout << endl;
}