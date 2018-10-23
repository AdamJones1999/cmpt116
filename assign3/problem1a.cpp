//============================================================================
// Name        : cmpt116-assignment3-p1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*program to accept user input until a non integer type
 * is input, then display the largest and smallest
 * of the inputs entered*/

#include <iostream>
using namespace std;


int smallest;
int largest;
int input;

int main() {
	cout << "input some integers one at a time, then input a character\n\
to receive the smallest and largest of the \
integers you input.\n";
	cin >> input;
	smallest = input;
	largest = input;

	/*while cin reads in input it can use,
	 * if user input is a non-integer data type,
	 * this while condition is false*/
	while (cin) {
		if (input > largest) {
			largest = input;
		}
		else if (input < smallest) {
			smallest = input;
		}
		cin >> input;
	}
	cout << "smallest input: " << smallest << ", largest: " << largest;
	return 0;
}
