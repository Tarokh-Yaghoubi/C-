
#include "person.h"

using namespace std;

Person::Person(const string& name, int age)
{
	this->name_ = name;
	this->age_ = age;
	cout << "Hello, your name is : " << name_ << " your age is " << age_ << endl;
}

Person::~Person()
{
	cout << "Program Executed \n";
}
