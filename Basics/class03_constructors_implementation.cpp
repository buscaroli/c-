/* 
 * LEARNING OOP CONCEPTS IN C++
 *
 * Class - Implementation of the Constructors
 *			
 */
 
#include <iostream>
using namespace std;
 
/* There are three main types of constructors:
 * - Non-parameterized Constructors: they don't take any argument
 *		The variables will have to be assigned after the object
 *		has been instantiated.
 * _ Parameterized Constructors: they take parameters to assign
 *		values to the variables. They can be overloaded, which 
 *		means we can create more than one with a different amount
 * 		of arguments (eg just length or both)
 * - Copy Constructors: They take another constructor as an argument
 *		when the object is instantiated. It's like going to a shop
 * 		and asking the shopkeeper to sell you an item 'like that'
 * 		pointing to it, because we have used it before and as it
 *		satisfies our needs we want to buy the same item again
 * 
 */ 
   
   
class Rectangle{
private:        // it's the default, so not strictly necessary
	int length;
	int breadth;

public:
	/* Non-Parameterized constructor
		We just decide a standard value to give to the
		variables. The values will then be modified as
		necessary in the rest of the program.
	*/
	Rectangle(){
		length = 0;
		breadth = 0;
	}
	
	
	/* Parameterized constructor.
		The values of the variables are assigned by
		passing the arguments diring the creation 
		of the object.
	*/
	Rectangle(int l, int b){
		set_length(l);
		set_breadth(b);
	}
	
	/* Copy constructor.
		A copy constructor allows us to instantiate
		an object assigning it the same values of
		an object already instantiated.
		It's like asking a vendor to sell you an 
		object 'like that one' and pointing to the
		object, what you want is a copy of a 
		pre-existing object that you know will meet
		your needs
	*/
	Rectangle (Rectangle &rect){
		length = rect.length;
		breadth = rect.breadth;
	}
	
	
	int area(){
		return length * breadth;
	}
	int perimeter(){
		return 2*(length + breadth);
	}
	
	
	void set_length(int x){
		if (x >= 0){
			length = x;
		}
		else {
			length = 0; 
						
		}
		
	}
	void set_breadth(int x){
		if (x >= 0){
			breadth = x;
		}
		else {
			breadth = 0;
		}
	
	
	}
	int get_length(){
		return length;
	}
	int get_breadth(){
		return breadth;
	}
	
};


int main(){
	/* Instantiating a rectangle r whose length and 
		breadth values will be assigned by the 
		non-parameterized contructor
	*/	
	
	Rectangle r;
	cout << "The length of r is " << r.get_length() << endl;
	
	
	/* Instantiating a rectangle r2 whose length and
		breadth will be assigned by passing arguments
		to the parameterized constructor
	*/
	Rectangle r2(5, 10);
	cout << "The area of r2 is " << r2.area() << endl;
	
	
	/*Instantiating an object r3 using a pre-existing
		object r2.
		The copy constructor will be used and the
		parameters assigned to r2 will be used to 
		instantiate r3
	*/
	Rectangle r3(r2);
	cout << "The area of r3 is " << r3.area() << endl;
	
	return 0;
}
