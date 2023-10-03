
#include <iostream>
#include <string>

int main() {

    bool isActive = true;
    bool isDeactive = false;

    int boolTest = 0x14;

    /* This is where initialization becomes complicated ... */

    int units_sold = 0;
    int units_sold (0);
    int units_sold = {0};
    int units_sold{0};

    // These four methods above can be used to set units_sold to zero .


    int mynum = 0X14;
    wchar_t chr = L'a';

    std::string major("Computer Engineering | Xtreme C Developer \n");

    std::cout << "the number is : " << mynum << std::endl;
    std::cout << "the number in decimal format is : " << static_cast<int>(mynum) << std::endl;
    std::cout << "\12 this is a sentence that \12 is spilled in many lines using \12 \\12 \12" << std::endl;
    std::string name = "tarokh";
    std::string family = "jacob";

    std::cout << "Hi \x4dO\115!\12" << std::endl;
    std::cout << "This is the character : " << static_cast<char>(chr) << std::endl;

    boolTest = isActive;
    std::cout << "the value of boolTest is : " << boolTest << std::endl;

    std::cout << "\12" << major << std::endl;

    std::cout << name << " " << family << std::endl;
    return 0;

}
