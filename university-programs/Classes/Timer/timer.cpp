
// Timer Class Definition 

#include <iostream>
#include <iomanip>
#include "timer.h"

Timer::Timer()
{
	//
}

void Timer::setValue(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Timer::initTimer()
{
 
        second = 0;

        for (;;)
        {
            second++;
            if (second == 60)
            {
                minute++;
                second = 0;
            }
            if (minute == 60)
            {
                hour++;
                minute = 0;
            }

            std::cout << std::setfill('0') << std::setw(2) << hour << " : " << std::setw(2) << minute << " : " << std::setw(2) << second << std::endl;

        }
}

Timer::~Timer()
{
    std::cout << "Program Executed \n";
}
