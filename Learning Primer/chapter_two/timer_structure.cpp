/*

    Author : Tarokh Yaghoubi
    Date :

*/

#include <iostream>
#include <iomanip>

struct Timer {

    int second; 
    int minute; 
    int hour;

}timer1{0, 0, 0};

int main()
{
    Timer timer1{0, 0, 0};
    
    for(;;)
    {

        timer1.second++;
        if (timer1.second == 60)
        {
            timer1.minute++;
            timer1.second = 0;
        }
        if (timer1.minute == 60)
        {
            timer1.hour++;
            timer1.minute = 0;
        }

        std::cout << std::setfill('0') << std::setw(2) << timer1.hour << " : " << std::setfill('0') << std::setw(2) << timer1.minute << " : " << std::setfill('0') << std::setw(2) << timer1.second << std::endl;
        
    }


    return 0;

}