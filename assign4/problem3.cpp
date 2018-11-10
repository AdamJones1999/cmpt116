/*cmpt116 assign4 problem3

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	//seed random number generator
	srand(time(NULL));
	// gen a random number between 1 and 10
	int north = 0;
	int east = 1;
	int south = 2;
	int west = 3;
	int position[] = {0,0};
	
	int numMoves = 100;
	
	cout << "input a pair of coordinates from which the drunkard makes 100 moves \n\
in the 4 cardinal directions.\n";
	for (int i = 0; i < 2; i++) {
		cin >> position[i];
	}
	if (cin) {
		for (int i = 0; i < numMoves; i++) {
			/*print the starting location of the drunkard*/
			if (i == 0) {
				cout << "start position: (" << position[0] << ", " << position[1] << ")" << "\n";
			}
			/*gen a random number*/
			int randNum = rand() % 4;
			if (randNum == north) {
				position[1] += 1;
			}
			else if (randNum == east) {
				position[0] += 1;
			}
			else if (randNum == south) {
				position[1] -= 1;
			}
			else if (randNum == west) {
				position[0] -= 1;
			}
			else {
				cout << "invalid direction" << "\n";
			}
			/*print the end position after all the drunkard moves*/
			if (i == numMoves - 1) {
				cout << "end position: (" << position[0] << ", " << position[1] << ")" << "\n";
			}
			
		}
	}
	else {
		cout << "invalid input: try again.\n";
	}
}
