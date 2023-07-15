

#include <iostream>
#include <cctype>
#include <vector>
#include <string>

using std::vector;
using std::string;

vector<int> ivec;	// ivec holds objects of type int 
vector<vector<string>> file;	// vector whose elements are vectors 
// vector<vector<int> >	// old-style
// vector is a template , not a type . 

// we can define vectors to hold objects of almost any type , 
// as of references are not objects we can not have a vector that 
// holds references . we can have vectors whose elements are themeselves vectors .

vector<int>ivec2(ivec);	// copy elements of ivec into ivec2;
vector<int>ivec3 = ivec;	// copy elements of ivec into ivec3;

// List initializing vector elements 

// vector<string>articles = {"first", "second", "third"};	// list initialization
vector<string> articles{"first", "second", "third"};	// list initialization

// creating a specified number of elements .

vector<int> tenVec(10, -2);
vector<string> svec(10, "Tarokh");

// value initialization 

vector<int> iivec(10);	// ten elements , each initialized to zero 
vector<string> ssvec(10);	// ten elements , each initialized to an empty string 

  


