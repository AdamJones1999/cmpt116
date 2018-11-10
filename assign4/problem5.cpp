/*cmpt116 assign4 problem5

tests:

1. whether the 16 element input includes each integer from 1 to 16 
2. when the numbers in order of input are put into a 4x4 array,
do they form a magic sqaure?

*/

#include <iostream>

using namespace std;

int main() {
	int inputArray[4][4] = { };
	int refArray[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	bool rowMagic = false;
	bool columnMagic = false;
	bool diagMagic = false;
	
	/*set false to start because if a non-number is input, then the valid input check is
	immediately bypassed*/
	bool inputValid = false;
	
	/*valid input checking block:

	1. each element is input and then checked against the list of valid inputs.
	2. if an input is in the valid domain, the int from 1-16 in the ref array is set to
	zero. 
	3. Then, the refArray is checked to see if every element has been 0'd, if yes, then
	the input array is valid because it contains all 1-16 ints, if not, program terminates.*/
	
		cout << "please input 16 unique integers in the range of 1 to 16 inclusive to check \n\
and see if, when read left to right as a 4 by 4 array, your input forms a magic square.\n";
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cin >> inputArray[i][j];
				for (int k = 0; k < 16; k++) {
					if (inputArray[i][j] == refArray[k]) {
						refArray[k] = 0;
					}
				}
			}
		}
		for (int i = 0; i < 16; i++) {
			//cout << refArray[i] << " ";
		}
		/*cout << "\n";
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << inputArray[i][j] << " ";
			}
		}*/
		
		for (int i = 0; i < 16; i++) {
			if (refArray[i] != 0) {
				inputValid = false;
				break;
			} 
			inputValid = true;
		}
		
		if (inputValid) {
		} 
		else {
			cout << "invalid input, try again.\n";
		} 
		
	/* this inputValid check is so that garbage input like a char or something doesnt get through*/
	if (inputValid) {
		/* the checks for the rows, columns, and diagonals basically work the same way:
			for the sake of succintness, row, column, or diagonal = rcd
		
		the first rcd is summed to serve as a check for the rcd's to follow it
		because each rcd must match the others. Then if all rcd's are equal, a bool
		such as rowMagic, is made true and if the three bools for each type of object (rcd)
		are true and their 3 summed values match, then the sqaure" is magic.
		
		if at any point an rcd summation is not equal to its previous, the checking loop is exited
		and the square is not magic
		
		each */
		
		/*========row checker============*/
		
		int firstRowSum = 0;
		//each corresponding row is checked against the first row sum
		int rowSum = 0;
		for (int j = 0; j < 4; j++) {
			firstRowSum += inputArray[0][j];
		}
		for (int i = 1; i < 4; i++) {
			rowSum = 0;
			for (int j = 0; j < 4; j++) {
				rowSum += inputArray[i][j];
				
			}
			if (firstRowSum != rowSum) {
				rowMagic = false;
				break;
			}
			rowMagic = true;
			
		}
		
		/*========column checker============*/
		
		int firstColumnSum = 0;
		//each corresponding column is checked against the first row sum
		int columnSum = 0;
		for (int j = 0; j < 4; j++) {
			firstColumnSum += inputArray[j][0];
		}
		for (int i = 1; i < 4; i++) {
			columnSum = 0;
			for (int j = 0; j < 4; j++) {
				columnSum += inputArray[j][i];
				
			}
			if (firstColumnSum != columnSum) {
				columnMagic = false;
				break;
			}
			columnMagic = true;
		}
		
		/*========diagonal checker============*/
		int diagSum1 = 0;
		int diagSum2 = 0;
		for (int i = 0; i < 4; i++) {
			diagSum1 += inputArray[i][i];
		}
		for (int i = 3; i >= 0 ; i--) {
			diagSum2 += inputArray[i][i];
		}
		
		if (diagSum1 == diagSum2) {
			diagMagic = true;
		}
		
		if ( (rowMagic && columnMagic && diagMagic) && (firstRowSum == firstColumnSum) && (firstColumnSum == diagSum1) ) {
			
			cout << "this input is valid, and generates a 4x4 magic square.\n";
		}
		else {
			cout << " this input  is valid but, it does not generate a 4x4 magic square.\n";
		}
			
	}

}
