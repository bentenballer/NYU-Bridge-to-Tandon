/*Write	a	program	that	computes	the	cost	of	a	long-distance	call.	The	cost	of	 the	call	is
determined	according	to	the	following	rate	schedule:
• Any	call	started	between	8:00	A.M.	and	6:00	P.M.,	Monday	through	Friday,	is	billed	at	a
rate	of	$0.40	per	minute.
• Any	call	starting	before	8:00	A.M.	or	after	6:00	P.M.,	Monday	through	Friday,	is	charged
at	a	rate	of	$0.25	per	minute.
• Any	call	started	on	a	Saturday	or	Sunday	is	charged	at	a	rate	of	$0.15	per	minute.
The	input	will	consist	of	the	day	of	the	week, the	time	the	call	started,	and	the	length	of	the
call	in	minutes.
The	output	will	be	the	cost	of	the	call.
Notes:
1. The	time	is	to	be	input	in	24-hour	notation,	so	the	time	1:30	P.M.	is	input	as	 13:30
2. The	day	of	the	week	will	be	read	as	one	of	the	following	two	character	string:	Mo		Tu
We		Th		Fr		Sa		Su
3. The	number	of	minutes	will	be	input	as	a	positive	integer.*/

#include <iostream>
#include <string>
using namespace std;

const double WEEKEND_COST = 0.15, WEEKDAY_COST = 0.40, WEEKNIGHT_COST = 0.25;
const string MON = "Mo", TUE = "Tu", WED = "We", THUR = "Th";
const string FRI = "Fr", SAT = "Sa", SUN = "Su";
const double EIGHT_AM = 8.0, SIX_PM = 18.0, MINUTE_IN_HOUR = 60.0;

int main() {
	int hour, minute, length_of_call;
	double minute_to_hour, hour_with_minute, cost_of_call;
	char colon;
	string day_of_call;

	cout << "Please enter the time you made the call in 24-hour notation: ";
	cin >> hour >> colon >> minute;

	cout << "Please enter the length of the call in minutes: ";
	cin >> length_of_call;

	cout << "Please enter the day of the week for the call in the following format:" << endl;
	cout << "(Mo: Monday, Tu: Tuesday, We: Wednesday, Th: Thursday" << endl << "Fr: Friday, Sa: Saturday, Su: Sunday)" << endl;
	cin >> day_of_call;

	minute_to_hour = double(minute) / double(MINUTE_IN_HOUR);
	hour_with_minute = double(hour) + minute_to_hour;

	if (day_of_call == MON || day_of_call == TUE || day_of_call == WED || day_of_call == THUR || day_of_call == FRI) {
		if (hour_with_minute >= EIGHT_AM && hour_with_minute < SIX_PM) {
			cost_of_call = WEEKDAY_COST * length_of_call;
			cout << "The cost of the call is " << cost_of_call << endl;
		}
		else {
			cost_of_call = WEEKNIGHT_COST * length_of_call;
			cout << "The cost of the call is " << cost_of_call << endl;
		}
	}
	else if (day_of_call == SAT || day_of_call == SUN) {
		cost_of_call = WEEKEND_COST * length_of_call;
		cout << "The cost of the call is $" << cost_of_call << endl;
	}
	else {
		cout << "Invalid format for the day of the call!" << endl;
	}

	return 0;
}