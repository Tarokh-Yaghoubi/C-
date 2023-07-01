#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>


using namespace std;

struct Timer {
    int second;
    int minute;
    int hour;
};

void update(Timer*);
void display(Timer*);

int main() {
    Timer currentTime{0, 0, 0};
    for (;;) {
        update(&currentTime);
        display(&currentTime);
    }

    return 0;
}

void update(Timer* timer1) {
    timer1->second++;
    if (timer1->second == 60) {
        timer1->minute++;
        timer1->second = 0;
    }
    if (timer1->minute == 60) {
        timer1->hour++;
        timer1->minute = 0;
    }

    
    sleep(1);

}

void display(Timer* timer1) {

    system("clear");

    cout << setfill('0') << setw(2) << timer1->hour << " : "
         << setfill('0') << setw(2) << timer1->minute << " : "
         << setfill('0') << setw(2) << timer1->second << endl;
}
