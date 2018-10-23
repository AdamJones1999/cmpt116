/*assignment3 problem3
computes standard deviation of a number set without needing to keep track
of previous specific set elements. All that matters is cumulative
totals and the current data point to be used as 
parameters in iterative comuputations
*/

#include <cmath>
#include <iostream>
using namespace std;

double data = 0;
double numElements = 0; // num of elements in data set
double stdDev = 0; // cumulative standard deviation
double mean = 0; // cumulative mean


int main() {
	cin >> data;
	while (data != 0) {
		numElements++; // count incr only after data is validated
		mean = mean + (data - mean) / numElements;
		if (numElements == 1) { /*avoids undefined behaviour in c++ program
			(div by 0 in stdDev formula)*/
		}
		else {
			stdDev = sqrt( ( pow(data, 2) - pow(data, 2) / numElements ) / (numElements - 1));
		}
		
		cout << mean << ", " << stdDev << "\n";
		cin >> data;
	}
	/*even though stdDev is initialized to 0, 0 is not what the stdDev is, by the 
	formula used in this program, stdDev when numElements = 1 is undefined */
	if (numElements == 1) {
		cout << "mean: " << mean << " standard deviation: " << "undefinned" << "\n";
	}
	else {
		cout << "mean: " << mean << " standard deviation: " << stdDev << "\n";
	}
	
	return 0;
}