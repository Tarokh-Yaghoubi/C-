#include <iostream>

int outer_var = 10;

int main()
{
    std::cout << outer_var << std::endl;
    int outer_var = 5;

    std::cout << outer_var << std::endl;

    std::cout << ::outer_var << std::endl;

    return 0;

}
