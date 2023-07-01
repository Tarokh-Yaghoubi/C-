

#include <iostream>

using namespace std;

int main()
{

    int number; // | - - - - - - - |
    number = 5;
    cout << number;


    int* ptr;
    ptr = &number;

    // Raw pointer

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << &number << endl;


    int* smartPtr;  // Declaration 

    smartPtr = new int; // Memory Allocate 

    *smartPtr = 35; // Assign a value to dynamic variable 

    cout << "The value of smart ptr is : " << *smartPtr << endl;


    delete smartPtr;    // deallocate 

    // smartPtr = new int ;

    smartPtr = NULL;

    return 0;

}

