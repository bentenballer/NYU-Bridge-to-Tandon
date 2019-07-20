/*
Suppose	John and Bill worked for some time and we want to calculate	the	total time both	of	
them worked. Write a program that reads number of days,	hours, minutes each	of them	
worked,	and	prints the	total time	both of	them worked	together as	days, hours, minutes.
Hint: Try to adapt the elementary method for addition of numbers to	this use.
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	the	number	of	days	John	has	worked: 2
Please	enter	the	number	of	hours	John	has	worked: 12
Please	enter	the	number	of	minutes	John	has	worked: 15
Please	enter	the	number	of	days	Bill	has	worked: 3
Please	enter	the	number	of	hours	Bill	has	worked: 15
Please	enter	the	number	of	minutes	Bill	has	worked: 20
The	total	time	both	of	them	worked	together	is:	6	days,	3	hours	and	35 minutes.
*/

#include <iostream>
using namespace std;
const int HOURS_IN_A_DAY = 24;

int main() {
	int john_days, john_hours, john_minutes, bill_days, bill_hours, bill_minutes;
	int extra_day, remaining_hours;
	int combined_days, combined_hours, combined_minutes;

	cout << "Please enter the number of days John has worked: ";
	cin >> john_days;
	cout << "Please enter the number of hours John has worked: ";
	cin >> john_hours;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> john_minutes;

	cout << "Please enter the number of days Bill has worked: ";
	cin >> bill_days;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> bill_hours;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> bill_minutes;
	
	combined_minutes = john_minutes + bill_minutes;

	combined_hours = john_hours + bill_hours;
	extra_day = combined_hours / HOURS_IN_A_DAY;
	remaining_hours = combined_hours % HOURS_IN_A_DAY;

	combined_days = john_days + bill_days + extra_day;

	

	cout << "The total time both of them worked together is: " << combined_days << " days, " << remaining_hours << " hours and " << combined_minutes << " minutes.";
	return 0;

}