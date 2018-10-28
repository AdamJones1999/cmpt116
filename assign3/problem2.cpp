//============================================================================
// Name        : cmpt116-assignment3-p2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int length;
int row = 1;
int space = 0;
int plusses = 0;

 void diamond(int length) {

	while (row < 2 * length) {
		//block for determining  length
		if (row <= length) {
			plusses = 2 * row - 1;
			space = length - row;
		}
		else if (row > length) {
			plusses = 4 * length - 2 * row - 1;
			space = row - length;
		}
		//cout << space << ", " << plusses << "\n";
		int i = space;
		int j = plusses;

		while (i > 0) {
			cout << " ";
			i -= 1;
		}
		while (j > 0) {
			cout << "+";
			j -= 1;
		}

		cout << "\n";
		row += 1;
	}
}

int main() {
	
	cout << "input the side length of the diamond \n\
made of plus-signs you want printed.\n";
	cin >> length;
	diamond(length);

	return 0;

}
