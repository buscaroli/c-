/* 
 * LEARNING OOP CONCEPTS IN C++
 *
 * Class
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
 * By Default anything inside the Class is 'private' so, in order
 * to access variables and functions we need to add the
 * word public: at the beginning of the Class.
 * In this case they can be accessed with the 'dot. operator.
 */ 
   
class Rectangle{
public:
	int length;
	int breadth;
	
	int area(){
		return length * breadth;
	}
	int perimeter(){
		return 2*(length + breadth);
	}
	
};


int main(){
	Rectangle r1, r2;
	/* r1 and r2 are objects, are the instances of the
	   class Rectangle.
	   The properties of objects are accessible via the
	   'dot' (.) operator, as long as the Class has been
	   declared public.
	*/
	r1.length = 10;
	r1.breadth = 5;   
	
	cout<< r1.area()<< endl; // printing the area of r1

	r2.length = 15;
	r2.breadth = 10;
	
	cout<< r2.area()<< endl; // printing the area of r2

	return 0;
}
