
#pragma once 

#define PERSON_CONSTRUCTOR

#include <iostream>
#include <string>

class Person {

private:
	std::string name_;
	int age_;


public:

	Person(const std::string& name="tarokh", int age = 16);
	~Person();

};
