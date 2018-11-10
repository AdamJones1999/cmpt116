#include <iostream>

using namespace std;



int main() {
	int size;
	cout << "input a size of the array.\n";
	cin >> size;
	double dataSet[size] = {};
	cout << "input " << size << " elements into the data set.\n";
	for (int j = 0; j < size; j++) {
		cin >> dataSet[j];
	}
	//testing: print original set
	for (int k = 0; k < size; k++) {
		cout << dataSet[k] << ", ";
	}
}