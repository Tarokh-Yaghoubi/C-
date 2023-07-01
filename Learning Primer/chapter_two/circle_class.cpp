
#include <iostream>
#include <iomanip>

#define PI 3.14

using namespace std;

class Circle {

    private:
        double radius;

    public:
        float perime();
        float area();
        Circle();
        Circle(double r);
        ~Circle();

};


float Circle::perime()
{
    return this->radius * this->radius * PI; 
}


float Circle::area()
{
    return 2 * PI * this->radius; 
}


Circle::~Circle()
{
    cout << "THE END \n";
}


Circle::Circle() {

    this->radius = 0.0;
}


Circle::Circle(double r) {

    this->radius = r;

};


int main() {
    // Create a Circle object with radius 5
    Circle circle(5);
    Circle circle1;

    // Calculate and print the area and perimeter
    std::cout << "Area: " << circle.area() << std::endl;
    std::cout << "Perimeter: " << circle.perime() << std::endl;

    std::cout << "Area: " << circle1.area() << std::endl;
    std::cout << "Perimeter: " << circle1.perime() << std::endl;

    return 0;
}

