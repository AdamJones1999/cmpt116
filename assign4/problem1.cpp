/*assignment 4 problem 1; due november 8 2018

this essentially a horizontal reimann sum
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	// beam, length, draft, point of interest
	double B = 0, L = 0, T = 0, x = 0;
	// number of strips
	double n = 0; 
	// z-axis step variable, in T/n increments
	double z = 0;	
	// cross sectional area summed
	double tot_area = 0;
	// area strip for each val of z
	double strip = 0;
	
	cout << "input B\n";
	//"input beam, which is the widest point at normal waterline\n";
	cin >> B;
	cout << "input L\n";
	//"input length, which is the length of the boat\n";
	cin >> L;
	cout << "input T\n";
	//"input draft, distance between waterline and bottom of the hull\n";
	cin >> T;
	cout << "input x\n";
	//"input x, the point along the length of the hull at which \n\
	the cross sectional area contained by the hull is calculated.\n";
	cin >> x;
	cout << "input n\n";
	//"input n, the number of slices taken in the cross sectional area calculation, \n\
	a higher n means a more accurate calculation.\n";
	cin >> n;
	
	if (abs(x) > L / 2.0) {
			cout << "invalid x coordinate. x must have smaller magnitude than half the \n\
			hull's length (L/2) because the hull is symmetrical about the x-axis.";
		}
	else {
		for (z = 0; z >= -T; z += -T/n) {
		//formula for each individual strip that goes from waterline to hull bottom
		strip = (B / 2.0) * (1 - pow(2*x/L, 2)) * (1 - pow(z/T, 2));

		tot_area += strip;
		// for testing
		cout << z << ", " << strip << "\n";
		}
		cout << "total area: " << tot_area << "\n";
	}
		
	return 0;
}

