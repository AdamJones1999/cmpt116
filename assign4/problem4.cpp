/*cmpt116 assign4 problem4

smoothing data by reassigning each element in the array to the average of the 
element's current value and any immediately adjacent elements

*/

#include <iostream>

using namespace std;

void smooth(double values[], int size) {
	double lastElement = 0;
	for (int i = 0; i < size; i++) {
		double temp;
		/* if the array is a single array, exit*/
		if (size == 1) {
		}
		else if (i == 0) {
			/* temp not required because no prior element value to preserve */
			lastElement = values[i];
			//smoothing
			values[i] = (values[i] + values[i + 1]) / 2;
		}
		/* if on the last element of array, only use that element 
		and the element before in the smoothing calc
		else if (i = size - 1)*/
		else if (i == size - 1) {
			//smoothing
			values[i] = (lastElement + values[i]) / 2;
		}
		/* interior element, not an endpoint of the array*/
		else {
			/* lastElement needs to be used in each avg calc before it is 
			redefined, but then value[i] has already been modified, thus a 
			temp variable is necessary to hold the old value of values[i]
			before it was smoothed */
			temp = values[i];
			//smoothing
			values[i] = (lastElement + values[i] + values[i+1]) / 3;
			lastElement = temp;
		}
	}
}

int main() {
	int size;
	cout << "input a size of the array.\n";
	cin >> size;
	double dataSet[size] = {};
	
	if (size == 0) {
	}
	else {
		cout << "input " << size << " elements into the data set.\n";
	}
	
	for (int j = 0; j < size; j++) {
		cin >> dataSet[j];
	}
	
	//print original set
	cout << "input set: {";
	for (int k = 0; k < size; k++) {
		if (k == size - 1) {
			cout << dataSet[k];
		}
		else {
			cout << dataSet[k] << ", ";
		}
	}
	cout << "}\n";
	//cout << ", " << dataSet[k] << "}\n";
	
	smooth(dataSet, size);
	
	//array after smoothing
	cout << "smoothed set: {";
	for (int k = 0; k < size; k++) {
		if (k == size - 1) {
			cout << dataSet[k];
		}
		else {
			cout << dataSet[k] << ", ";
		}
	}
	cout << "}\n";
	//cout << ", " << dataSet[k] << "}\n";
}