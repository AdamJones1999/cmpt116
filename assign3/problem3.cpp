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
double sum_of_squared = 0; // square individual data, then sum them
double sum = 0; // sum that is then squared in formula


int main() {
	cout << "input some integers and end the data set with \n\
a 0 or a non-number character. Then hit enter to calculate the mean and standard \n deviation of the data set.\n";
	cin >> data;
	while (data != 0) {
		numElements++; // count incr only after data is validated
		sum += data;
		sum_of_squared += data * data;
		cin >> data;
	}
	
		if (numElements == 1) { /*avoids undefined behaviour in c++ program
			(div by 0 in stdDev formula)*/
		}
		else {
			stdDev = sqrt( ( sum_of_squared - pow(sum, 2) / numElements ) / (numElements - 1));
		}
		
		mean = sum / numElements;
		
	/*even though stdDev is initialized to 0, 0 is not what the stdDev is, by the 
	formula used in this program, stdDev when numElements = 1 is undefined */
	if (numElements == 1) {
		cout << "mean: " << mean << " standard deviation: " << "undefined" << "\n";
	}
	else if (numElements == 0) {
		cout << "no data input \n";
	}
	else {
		cout << "mean: " << mean << " standard deviation: " << stdDev << "\n";
	}
	
	return 0;
}