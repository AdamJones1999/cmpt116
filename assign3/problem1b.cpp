//============================================================================
// Name        : cpmt116-assignment3-p1b.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*program which accepts integer inputs from the user,
 * then once input is exited, prints the number of
 * even and odd integers input*/

#include <iostream>
using namespace std;

int main() {
	cout << "input some integers, then input a character to receive the \n\
number of even and odd integers you input before the character.\n";

	int evenNum = 0;
	int oddNum = 0;
	int input;
	cin >> input;

	/*while cin reads in input it can use,
	 * if user input is a non-integer data type,
	 * this while condition is false*/
	while (cin) {
		//even nums are divisible by 2
		if (input % 2 == 0) {
			evenNum += 1;
		}
		//odd numbers aren't divisible by 2
		else if ( (input % 2 == 1) || (input % 2 == -1) ) {
			oddNum += 1;
		}
		cin >> input;
	}
	cout << "number of even inputs: " << evenNum << ", number of odd inputs: " << oddNum << "\n";
	return 0;
}

