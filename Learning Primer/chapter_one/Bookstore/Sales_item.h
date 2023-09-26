
/*  A BRIEF EXPLANAION ON CLASSES  */

/**
 * 
 *      The purpose of the Sales_item class is to represent the total
 *      revenue, number of copies sold, and average sales price 
 *      for a book.
 * 
 *      How these data are stored or computed is not our concern. To use
 *      a class, we need not care about how it is implemented. Instead,
 *      what we need to know is what operations objects of that type 
 *      can perform.
 * 
*/

/**
 * 
 *      Every class defines a type. The type name is the same as the name of 
 *      the class. Hence, our Sales_item class defines a type named Sales_item.
 *      As with the built-in types, we can define a variable of a class type. 
 *      when we write :
 *      
 *      Sales_item item1;
 * 
 *      we are saying that item1 is an object of Sales_item.
 * 
*/

/**
 * 
 *      In addition to being able to define variables of type Sales_item. we can:
 * 
 *      * Call a function named isbn to fetch the ISBN from a Sales_item object.
 *      * Use the input (>>) and output (<<) operators to read and write objects of type Sales_item. 
 *      * Use the assignment operator (=) to assign one Sales_item object to another.
 *      * Use the addition operator (+) to add two Sales_item objects. The two objects must refer
 *        to the same ISBN. The result is a new Sales_item object whose ISBN is that of its operands
 *        and whose number sold and revenue are the sum of the corresponding values in its operands.
 *      * Use the compound assignment operator (+=) to add one Sales_item object into another.
 * 
*/


//      READING AND WRITING Sales_items


/**
 * 
 *      Now that we know what operations we can use with Sales_item objects, we can write programs that use
 *      the class. For example; the following program reads data from the standard input into a Sales_item 
 *      object and writes that Sales_item back onto the standard output:
 * 
 * 
 *      #include <iostream>
 *      #include "Sales_item.h"
 * 
 *      int main()
 *      {
 *              Sales_item book;
 * 
 *              // Read ISBN, number of copies sold, and sales price
 * 
 *              std::cin >> book;
 * 
 *              // write ISBN, number of copies sold, total revenue, and average price 
 * 
 *              std::cout << book << std::endl;
 * 
 *              return 0;
 *
 *       } 
 * 
*/

/**
 * 
 *      if the input to this program is :   0-201-70353-X 4 24.99
 * 
 *      then the output will be : 0-201-70353-X 4 99.96 24.99
 * 
 * 
 *      Our input says that we sold four copies of the book at $24.99 each,
 *      and the output indicates that the total sold was four, the total revenue was $99.96,
 *      and the average price per book was $24.99.
 * 
 * 
*/


//      ADDING Sales_items, C++ programming language

/**
 * 
 *      A more interesting example adds two Sales_item objects:
 * 
 * 
 *      #include <iostream>
 *      #include "Sales_item.h"
 * 
 *      int main() {
 * 
 *          Sales_item item1, item2;
 * 
 *          std::cin >> item1 >> item2;         // read a pair of transactions
 * 
 *          std::cout << item1 + item2 << std::endl;    // print their sum
 * 
 *          return 0;
 * 
 *      }
 * 
 * 
 * 
*/

/**
 * 
 *      If we give this program the following input
 * 
 *      0-201-78345-X 3 20.00
 *      0-201-78345-X 2 25.00
 *
 *      our output is
 * 
 *      0-201-78345-X 5 110 22
 * 
 * 
*/


/**
 * 
 *      This program starts by including the Sales_item and iostream headers
 *      Next we define two Sales_item objects to hold the transactions.
 *      We read data into these objects from the standard input. The output expression
 *      does the addition and prints the result.
 * 
*/

/******************************************************************************************************/


/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 *
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 *
 *
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 *
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address:
 *
 *     Pearson Education, Inc.
 *     Rights and Permissions Department
 *     One Lake Street
 *     Upper Saddle River, NJ  07458
 *     Fax: (201) 236-3290
*/

/* This file defines the Sales_item class used in chapter 1.
 * The code used in this file will be explained in
 * Chapter 7 (Classes) and Chapter 14 (Overloaded Operators)
 * Readers shouldn't try to understand the code in this file
 * until they have read those chapters.
*/

#ifndef SALESITEM_H
// we're here only if SALESITEM_H has not yet been defined
#define SALESITEM_H

#include "Version_test.h"

// Definition of Sales_item class and related functions goes here
#include <iostream>
#include <string>

class Sales_item {
// these declarations are explained section 7.2.1, p. 270
// and in chapter 14, pages 557, 558, 561
friend std::istream& operator>>(std::istream&, Sales_item&);
friend std::ostream& operator<<(std::ostream&, const Sales_item&);
friend bool operator<(const Sales_item&, const Sales_item&);
friend bool
operator==(const Sales_item&, const Sales_item&);
public:
    // constructors are explained in section 7.1.4, pages 262 - 265
    // default constructor needed to initialize members of built-in type
#if defined(IN_CLASS_INITS) && defined(DEFAULT_FCNS)
    Sales_item() = default;
#else
    Sales_item(): units_sold(0), revenue(0.0) { }
#endif
    Sales_item(const std::string &book):
              bookNo(book), units_sold(0), revenue(0.0) { }
    Sales_item(std::istream &is) { is >> *this; }
public:
    // operations on Sales_item objects
    // member binary operator: left-hand operand bound to implicit this pointer
    Sales_item& operator+=(const Sales_item&);

    // operations on Sales_item objects
    std::string isbn() const { return bookNo; }
    double avg_price() const;
// private members as before
private:
    std::string bookNo;      // implicitly initialized to the empty string
#ifdef IN_CLASS_INITS
    unsigned units_sold = 0; // explicitly initialized
    double revenue = 0.0;
#else
    unsigned units_sold;
    double revenue;
#endif
};

// used in chapter 10
inline
bool compareIsbn(const Sales_item &lhs, const Sales_item &rhs)
{ return lhs.isbn() == rhs.isbn(); }

// nonmember binary operator: must declare a parameter for each operand
Sales_item operator+(const Sales_item&, const Sales_item&);

inline bool
operator==(const Sales_item &lhs, const Sales_item &rhs)
{
    // must be made a friend of Sales_item
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.isbn() == rhs.isbn();
}

inline bool
operator!=(const Sales_item &lhs, const Sales_item &rhs)
{
    return !(lhs == rhs); // != defined in terms of operator==
}

// assumes that both objects refer to the same ISBN
Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// assumes that both objects refer to the same ISBN
Sales_item
operator+(const Sales_item& lhs, const Sales_item& rhs)
{
    Sales_item ret(lhs);  // copy (|lhs|) into a local object that we'll return
    ret += rhs;           // add in the contents of (|rhs|)
    return ret;           // return (|ret|) by value
}

std::istream&
operator>>(std::istream& in, Sales_item& s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    // check that the inputs succeeded
    if (in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_item();  // input failed: reset object to default state
    return in;
}

std::ostream&
operator<<(std::ostream& out, const Sales_item& s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
}

double Sales_item::avg_price() const
{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}
#endif

