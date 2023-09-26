
/**
 * 
 *      Making objects from Sales_item class
 *      and doing some actions
 * 
*/

#include "Sales_item.h"

int main(int argc, char* argv[])
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;       // read a pair of transaction

    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 + item2 << std::endl;
        return 0;       // indicate success
    } else {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
        return -1;      // indicate failure
    }
}

