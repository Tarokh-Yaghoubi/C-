/*

    Author : Tarokh Yaghoubi
    Date : 

*/

// Timer structure -> Class 

#include <iostream>
#include <iomanip>

// setw() , setfill()

// setfill() , fill empty spaces . 
// setw() , set width according to the passed param . 

using namespace std;

struct Timer {

    int second; // timer1 -> second = 0; // timer2 -> second = 15
    int minute; // timer1 -> minute = 49; 
    int hour;   // timer1 -> hour = 45;

};


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

        cout << setfill('0') << setw(2) << timer1.hour << " : " <<  setfill('0') << setw(2) << timer1.minute << " : " <<  setfill('0') << setw(2) << timer1.second << endl;

    }

    // system("pause")

    return 0;

}
