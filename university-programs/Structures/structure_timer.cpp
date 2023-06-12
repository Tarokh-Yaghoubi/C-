/*

	Author : Tarokh Yaghoubi
	Date :

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Timer {

	int hour;
	int minute;
	int second;
}; 

int main(int argc, char* argv[])
{
	Timer thisTimer = { 0, 0, 0 };

	for (;;)
	{
		thisTimer.second++;
		if (thisTimer.second == 60)
		{
			thisTimer.minute++;
			thisTimer.second = 0;
		}
		if (thisTimer.minute == 60)
		{
			thisTimer.hour++;
			thisTimer.minute = 0;
		}
		cout << setfill('0') << setw(2) << thisTimer.hour << " : " << setw(2) << thisTimer.minute << " : " << setw(2) << thisTimer.second << endl;

	}

	system("pause");
	return 0;
}
