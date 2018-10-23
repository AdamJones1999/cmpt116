//============================================================================
// Name        : cmpt116-assignment3-p1d.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*program takes a sequence of integers and if there are
 * any consecutive integers of the same value, they
 * are printed out in the output.*/

#include <iostream>
using namespace std;

int main() {
	cout
			<< "input a set of integers, if there are \n\
adjacent duplicates, they will be printed. \n\
Input a character to exit program.\n";

	int current_input;
	int last_input;

	/*if current input is equal to the last input
	 * the value of that input is printed*/
	while (cin) {
		if (current_input == last_input) {
			cout << current_input << " ";
		}
		last_input = current_input;
		cin >> current_input;
	}
	cout << "done";
	return 0;
}
