/*assignment3 problem3
computes standard deviation of a number set without needing to keep track
of previous specific set elements. All that matters is cumulative
totals and the current data point to be used as 
parameters in iterative comuputations
*/

#include <iostream>
using std::cout;

float data = 0;
float numElements = 0; // num of elements in data set
float stdDev = 0; // cumulative standard deviation
float mean = 0; // cumulative mean


int main() {
	cin << data;
	while (data != 0) {
		count++; // count incr only after data is validated
		mean = mean + data / numElements
		
		stdDev = float sqrt( pow((data + mean), 2) / (numElements + 1))
		
		cin << data;
	}
	
	return 0;
}