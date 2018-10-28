//============================================================================
// Name        : cmpt116-assignment2-q2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*input two different times in parts:
 * days, hours, minutes. and compare which is sooner
 * or if they are the same time*/

#include <iostream>
using namespace std;

int day1;
int day2;
int hour1;
int hour2;
int minute1;
int minute2;

int main()
{
	cout << "input a first numerical day\n";
		cin >> day1;
	cout << "input a first numerical hour from [1, 24]\n";
		cin >> hour1;
	cout << "input a first minute from [1, 60]\n";
		cin >> minute1;
	cout << "input a second numerical day\n";
		cin >> day2;
	cout << "input a second numerical hour [1, 24]\n";
		cin >> hour2;
	cout << "input a second minute from [1, 60]\n";
		cin >> minute2;

	/*determine which time is sooner by doing a direct between different
	 * time scales and narrow the scale if necessary*/
	if ( (day1 >= 1) && (day2 >= 1) &&
			(hour1 >= 1) && (hour1 <= 24) && (hour2 >= 1) && (hour2 <= 234) &&
			(minute1 >= 1) && (minute1 <= 60) && (minute2 >= 1) && (minute2 <= 60) )

		if (day1 < day2)
			{
			cout << "first time is earlier than second time\n";
			}
		else if (day1 > day2)
			{
			cout << "second time is earlier than first time\n";
			}
		else
			{
			if (hour1 < hour2)
				{
				cout << "first time is earlier than second time\n";
				}
			else if (hour1 > hour2)
				{
				cout << "second  time is earlier than second time\n";
				}
			else
				{
				if (minute1 < minute2)
					{
					cout << "first time is earlier than second time\n";
					}
				else if (minute1 > minute2)
					{
					cout << "second time is earlier than first time\n";
					}
				else if (minute1 == minute2)
					{
					cout << "both times are the same\n";
					}
				}
			}
	else
		cout << "invalid input";
	return 0;
}
