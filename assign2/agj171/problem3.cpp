//============================================================================
// Name        : cmpt116-assignment2-q3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*this program obtains a wavelength from the user and
 * outputs what range of the electromagnetic spectrum
 * it lies
 */

#include <iostream>
using namespace std;
#include <cmath>

double wavelength;

int main()
{
	//user input
	cout << "input a wavelength value, in meters, to see where it lies on the electromagnetic spectrum.\n";
	cout << "input: ";
	cin >> wavelength;
	cout << "output: ";

	//different EM spectrum cases
	if (wavelength > 1e-1)
		{
		cout << "this wavelength is in the radio wave part of the EM spectrum\n";
		}
	else if (wavelength >= 1e-3)
		{
		cout << "this wavelength is in the microwave part of the EM spectrum\n";
		}
	else if (wavelength >= 7e-7)
		{
		cout << "this wavelength is in the infrared part of the EM spectrum\n";
		}
	else if (wavelength >= 4e-7)
		{
		cout << "this wavelength is in the visible light part of the EM spectrum\n";
		}
	else if (wavelength >= 1e-8)
		{
		cout << "this wavelength is in the ultravoliet part of the EM spectrum\n";
		}
	else if (wavelength >= 1e-11)
		{
		cout << "this wavelength is in the x-ray part of the EM spectrum\n";
		}
	else if ( (wavelength < 1e-11) && (wavelength > 0) )
		{
		cout << "this wavelength is in the gamma ray part of the EM spectrum\n";
		}
	else
		{
		cout << "invalid input\n";
		}

	return 0;
}
