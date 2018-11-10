/*cmpt116 assign4 problem2

*/
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double T99Ratio = 1; //initial RELATIVE PROPPORTION of Technetium-99 (100%)
	int currentTime = 1;// hours, time elapsed since dose
	int halfLife = 6; //hours, half life of element
	int timeRange = 24; //decay period of interest
	int timeStep = 1; //time resolution
	
	for (currentTime = 1; currentTime <= timeRange; currentTime += timeStep) {
		/*manipulating equation given in problem to A/A_o = e^(-t*log(2/h))
		necessitates only the need for a ratio of A/A_o rather than one variable
		for each quantity*/
		T99Ratio = exp ( 1.0 * currentTime * (log ( 2.0 / halfLife ) ) );
		cout.precision(3);
		cout << "initial dose proportion remaining: " << T99Ratio << " at " << currentTime << " hours after dose.\n";
	}
	return 0;
}
	
		
