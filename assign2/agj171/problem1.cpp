//============================================================================
// Name        : cmpt116-assignment2-q1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//program sees what season the input month is in
#include <iostream>
using namespace std;

int month;
int day;
string season;

int main()
{	//user input
	cout << "Input a numerical month\n";
	cin >> month;
	cout << "Input a numerical day in the chosen month\n";
	cin >> day;

	//if the input is valid, determine season by month number
	if ( (month >= 1 ) && (month <= 12) && (day >= 1) && (day <= 31) )
	{
		if (month == 1 || month == 2 || month == 3)
		{
			season = "Winter";
		}
		else if (month == 4 || month == 5 || month == 6)
		{
			season = "Spring";
		}
		else if (month == 7 || month == 8 || month == 9)
		{
			season = "Summer";
		}
		else if (month == 10 || month == 11 || month == 12)
		{
			season = "Fall";
		}

		/*if month is div by 3 and after 21st day, the season
		 * is actually the next season in line */
		if ((month % 3==0) && (day >= 21)) {
			if (season == "Winter")
			{
				season = "Spring";
			}
			else if (season == "Spring")
			{
				season = "Summer";
			}
			else if (season == "Summer")
			{
				season = "Fall";
			}
			else
			{
				season = "Winter";
			}

		}
		cout << "the season is: " << season;
	}
	else
		cout << "invalid input";
	return 0;

}
