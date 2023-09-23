
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
