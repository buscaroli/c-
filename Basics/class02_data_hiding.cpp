/* 
 * LEARNING OOP CONCEPTS IN C++
 *
 * Class - Data Hiding
 */
 
#include <iostream>
using namespace std;
/* Rectangle is a class: which is like a design or a blueprint
 * which is used to instantiate an object (in the main function
 * r1 and r2 are objects, they are instances of the class 
 * Rectangle).
 * Variables correspond to the properties of an object (in this
 * case length and breadth) whereas the functions correspond to 
 * the behaviours of the object (or actions, in this case area()
 * and perimeter() ).
 * When an object is instantiated its variables occupy memory in
 * the Stack, but not its functions.
 *
 * Variables are declared Private so nobody can access them
 * Functions are declared public, so they can be accessed, and 
 * in fact we are going to define Accessors and Mutators in order
 * to be able to modify the variables of the class (Also called
 * Property Functions, becasue they are related to the properties).
 * It's good practice to implement data validation logic to the
 * setters/mutators.
 * A property wit both an accessor and a mutator is write-readable,
 * one with jjust an accessor is read-only and one with just a
 * mutator is write-only.
 * What's important is that the variables are not accessible without
 * using the accessors.
 */ 
   
class Rectangle{
private:        // it's the default, so not strictly necessary
	int length;
	int breadth;

public:
	int area(){
		return length * breadth;
	}
	int perimeter(){
		return 2*(length + breadth);
	}
	
	/* set-length and set_breadth are also called
	   setters or mutators. It's important to validate the data
	   inside the setters as the final user needs 
	   to have a black box that functions in a safe
	   way.
	   */
	void set_length(int x){
		if (x >= 0){
			length = x;
		}
		else {
			length = 0; // setting it to 0 is one of
						// the possible choices
		}
		
	}
	void set_breadth(int x){
		if (x >= 0){
			breadth = x;
		}
		else {
			breadth = 0;
		}
	
	/* get_length and get_breadth are also called getters
	    or accesors.
	*/
	}
	int get_length(){
		return length;
	}
	int get_breadth(){
		return breadth;
	}
	
};


int main(){
	
	Rectangle rect1;
	
	rect1.set_length(10);  // setting the length of rect1
	rect1.set_breadth(-5); // setting the breadth of rect1
	
	cout << "The area is " << rect1.area() << endl; // giving 0
	
	rect1.set_breadth(5);
	cout << "The area is " << rect1.area() << endl; // giving 50
	
	
	return 0;
}
