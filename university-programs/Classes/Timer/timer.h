
#ifndef TIMER_CLASS

#define TIMER_CLASS

class Timer {

private:

	int hour;
	int minute;
	int second;

public:

	void setValue(int, int, int);
	void initTimer();
	Timer();
	~Timer();

};

#endif
