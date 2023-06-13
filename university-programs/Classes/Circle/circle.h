
#ifndef CIRCLE_CLASS
#define CIRCLE_CLASS

class Circle {

private:
	float radius;


public:
	float area();
	float perime();
	void setRadius(float r);
	Circle();
	/*~Circle()
	{
		std::cout << "Contructor Executed \n";
	}*/

};


#endif