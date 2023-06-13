

#ifndef RECTANGLE_CLASS

#define RECTANGLE_CLASS

class Rectangle {

private:

	int len;
	int width;

public:

	int perime();
	int area();
	void setValue(int, int);

	int get_width();
	int get_len();

	Rectangle();
	~Rectangle();

};


#endif