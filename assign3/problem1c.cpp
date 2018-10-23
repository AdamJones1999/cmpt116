//============================================================================
// Name        : cmpt116-assignment3-p1c.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*this program reads in integers and outputs a
 * cumulative total for each integer input*/

#include <iostream>
using namespace std;

int total;
int input;

int main() {
	cout << "input some integers, then input a \n\
character to receive the sum of the integers input.\n";
	cin >> input;

	/*while cin reads in input it can use,
	 * if user input is a non-integer data type,
	 * this while condition is false*/
	while (cin) {
		//add each input into total
		total += input;
		cout << total << "\n";
		cin >> input;
	}
	cout << "done";
	return 0;
}

