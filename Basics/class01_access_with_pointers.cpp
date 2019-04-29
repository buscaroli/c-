/* 
 * LEARNING OOP CONCEPTS IN C++
 *
 * Class - Accessing them with Pointers
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
 * The address of an object can be assigned to a pointer  to the
 * class, in this case variables and functions can be accessed with
 * the arrow operator '->'.
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
	/* r is an object, an instance of the class Rectangle
	   and p is a pointer to a Rectangle, who has received
	   the address of r (that specific instance of Rectangle)
	   In order to access the variables and functions of a
	   class with a pointer, i need to use the 
	   arrow operator '->'
	   */
	
	// Case 1 : we create the object and assign its address
	// to a pointer
	Rectangle r;
	Rectangle *p;
	
	p = &r;
	
	p->length = 10;
	p->breadth = 15;	
	
	cout<<p->area()<<endl;
	
	// Case 2: we create a pointer directly
	Rectangle *q = new Rectangle();
	q->length = 5;
	q->breadth = 10;
	
	cout<<q->perimeter()<<endl;
	
	return 0;
}
