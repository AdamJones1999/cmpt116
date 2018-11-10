#include <iostream>

/* the * operator is a unary operator which can be read as:
	value pointed to by*/

using namespace std;t

int amin() {
	int myvar = 4;
	/*address of a var can be obtained by preceding the name of 
	a varaible with an ampersand sign, known as the address-of operator*/
	foo = &myvar; //doesnt assign value, assigns address
	/* actual value is unknown right now, this address is determined at runtime, 
	for the sake of discussion, pretend we did and mywar's address is 100*/
	myvar = 25;
	foo = &myvar;
	bar = myvar;
	/* first, we assigned 25 to myvar obv, then we assigned foo to the address
	of myvar, assumed to be 100. and third, the value contained in myvar, is
	stored in bar, a regular assignment statement.*/
	
	//Derefernce Operator (*)
	/* a var storing address of another var is a pointer. They "point to" 
	/*interested in two values
		data stored at the variable we are pointing to
		address of the variable we are pointing to*/
	
	return 0;
}
