//============================================================================
// Name        : cmpt116-assignment2-q4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*this program converts a base 10 integer from 1-3,999
 * to a Roman numeral
 */

#include <iostream>
using namespace std;

double input;

int M; //divisibility by 1000, max is 3
int D; //divisibility by 500, max is 1
int C; //divisibility by 100, max is 4
int L; //divisibility by 50, max is 1
int X; //divisibility by 10, max is 4
int V; //divisibility by 5, max is 1
int I; //divisibility by 1, max is 4

int main()
{
	//user input
	cout << "input any integer 1-3,999 to be converted to a Roman numeral\n";
	cout << "input: ";
	cin >>  input;
	cout << "output: ";

	/* so long as the input is valid: getting the
	 * amount of each different numeral denomination
	 * by doing integer division on input, then subtracting
	 * the (division result*value of letter) from input,
	 * then repeating with each corresponding letter*/
	if ( (input <= 3999) && (input >= 1) ) {
		M = input / 1000;
			input = input - M * 1000;

		D = input / 500;
			input = input - D * 500;

		C = input / 100;
			input = input - C * 100;

		L = input / 50;
			input = input - L * 50;

		X = input / 10;
			input = input - X * 10;

		V = input / 5;
			input = input - V * 5;

		I = input;

		//thousands block
		if (M == 1) {
			cout << "M";
		}
		else if (M == 2) {
			cout << "MM";
		}
		else if (M == 3) {
			cout << "MMM";
		}

		//hundreds block
		if ( (D == 1) && (C ==4) ) { //900
			cout << "CM";
		}
		else {
			if (D == 1) { //500
			cout << "D";
			}
			if (C == 1) { //100
				cout << "C";
			}
			else if (C == 2) { //200
				cout << "CC";
			}
			else if (C == 3) { //300
				cout << "CCC";
			}
			else if (C == 4) { //400
				cout << "CD";
			}
		}

		//tens block
		if ( (L == 1) && (X == 4) ) { //90
			cout << "XC";
		}
		else {
			if (L == 1) { //50
			cout << "L";
			}
			if (X == 1) { //10
				cout << "X";
			}
			else if (X == 2) { //20
				cout << "XX";
			}
			else if (X == 3) { //30
				cout << "XXX";
			}
			else if (X == 4) { //40
				cout << "XL";
			}
		}

		//ones block
		if ( (V == 1) && (I == 4) ) { //9
			cout << "IX";
		}
		else {
			if (V == 1){ //5
			cout << "V";
			}
			if (I == 1) { //1
				cout << "I";
			}
			else if (I == 2) { //2
				cout << "II";
			}
			else if (I == 3) { //3
				cout << "III";
			}
			else if (I == 4) { //4
				cout << "IV";
			}
		}
	}
	else {
		cout << "invalid input";
	}

	return 0;
}


