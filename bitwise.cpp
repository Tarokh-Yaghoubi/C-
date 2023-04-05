#include <iostream>

using namespace std;

int main() {
    char ch = 'A';
    int v = 127;
    for (ch = 'A'; ch < 'Z'; ch++)
        cout << (char)(ch&v) << endl;

    system("pause");
    return 0;
}