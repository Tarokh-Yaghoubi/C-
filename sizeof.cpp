#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    int** ptr1;

    cout << "The size of char is " << sizeof(char) << endl;
    cout << "The size of int is " << sizeof(int) << endl;
    cout << "The size of float is " << sizeof(float) << endl;
    cout << "The size of long is " << sizeof(long) << endl;
    cout << "The size of void is " << sizeof(void) << endl;
    cout << "The size of pointer is " << sizeof(ptr) << endl;
    cout << "The size of long int is " << sizeof(long int) << endl;
    cout << "The size of short int is " << sizeof(short int) << endl;
    cout << "The size of wide char is " << sizeof(wchar_t) << endl;
    cout << "The size of the long long is " << sizeof(long long) << endl;
    cout << "The size of pointer to pointer is " << sizeof(ptr1) << endl;
    
    system("pause");
    return 0;
}

