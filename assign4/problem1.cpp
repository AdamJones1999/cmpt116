/*assignment 4 problem 1; due november 8 2018

this essentially a horizontal reimann sum
*/
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	// beam, length, draft, point of interest
	double beam = 0, length = 0, draft = 0, x = 0;
	// number of strips
	double num_strips = 0; 
	// z-axis step variable, in T/n increments
	double z = 0;	
	// cross sectional area summed
	double tot_area = 0;
	// area strip for each val of z
	double strip = 0;
	
	cout << "input B: beam\n";
	//"input beam, which is the widest point at normal waterline\n";
	cin >> beam;
	cout << "input L: length\n";
	//"input length, which is the length of the boat\n";
	cin >> length;
	cout << "input T: draft\n";
	//"input draft, distance between waterline and bottom of the hull\n";
	cin >> draft ;
	cout << "input x: position x on the hull, where x = 0 is at center of length\n";
	//"input x, the point along the length of the hull at which \n\
	the cross sectional area contained by the hull is calculated.\n";
	cin >> x ;
	cout << "input n: number of iterations in the computation\n";
	//"input n, the number of slices taken in the cross sectional area calculation, \n\
	a higher num_stripsmeans a more accurate calculation.\n";
	cin >> num_strips;
	
	if (abs(x) > length / 2.0) {
			cout << "invalid x coordinate. x must have smaller magnitude than half the \n\
hull's length (L/2) because the hull is symmetrical about the x-axis.";
		}
	else {
		for ( z = 0; z >= - draft; z += - draft / num_strips) {
		/*formula for each individual strip that goes from waterline to hull bottom.
		the big formula only calculates one half of the cross section,
		so it must be multiplied by 2*/
		strip = 2 * ( beam / 2.0) * (1 - pow(2 * x / length, 2)) * (1 - pow( z / draft , 2));

		tot_area += strip * draft/num_strips;
		}
		cout << "cross sectional area at x = " << x << ": " << tot_area << "\n";
	}
		
	return 0;
}

