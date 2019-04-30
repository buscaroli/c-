/* 
 * LEARNING OOP CONCEPTS IN C++
 *
 * Class - Constructors
 */
 
#include <iostream>
using namespace std;
 
/* The class Rectangle has 2 variables: length and breadth.
 * When a Rectangle object is instantiated, its variables have
 * garbage values until a value is assigned to them.
 * How can we assign values to the variables? 
 * We could use the 2 mutator functions set_length and set_breadth
 * but it doesn't make sense from an OOP point of view.
 * When designing an object we need to think about it as a real
 * object, something we could buy for example. If we bought a 
 * Rectangle object would it make sense to buy an object with
 * no length and breadth and to assign those values after the 
 * purchase? No it wouldn't. (Think about buying a car with no
 * colour, would it make sense to buy one? Even if you could buy
 * a car with no colour, would you expect the car to be painted 
 * once it's delivered to you?
 *
 * In OOP the 'fundamental' values of the object should be 
 * assigned when the object itself is created, and we can do it
 * through the use of Constructors.
 * The compiler provides a default constructor, but we can define
 * our own; in particular we can write 3 different types of
 * constructors:
 * - Non-parameterized constructors
 * - Parameterized constructors
 * - Copy constructors
 * If we don't define a constructor the default constructor will
 * be defined by the compiler.
 *
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
	
	
	
	return 0;
}
