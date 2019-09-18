#include <iostream>
#include <string>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalender(int year, int startingDay);
const string JAN = "January", FEB = "February", MAR = "March", APR = "April", MAY = "May";
const string JUN = "June", JUL = "July", AUG = "August", SEP = "September", OCT = "October";
const string NOV = "November", DEC = "December";

int main() {
	int year, startingDay;
	cout << "Please enter the year and starting day (1-7), separated by space: ";
	cin >> year >> startingDay;
	
	while (startingDay < 1 || startingDay > 7) {
		cout << "Please enter a valid starting day (1-7): ";
		cin >> startingDay;
	}
	cout << "\n";
	printYearCalender(year, startingDay);
	
	return 0;
}

int printMonthCalender(int numOfDays, int startingDay){
	int start, daycounter, space;
	cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
	daycounter = startingDay;

	for (space = 1; space < startingDay; space++) {
		cout << "\t";
	}

	for (start = 1; start <= numOfDays; start++) {
		if (daycounter % 7 == 0) {
			if (start == numOfDays) {
				cout << start;
				daycounter = 1;
			}
			else {
				cout << start << endl;
				daycounter = 1;
			}
		}
		else {
			cout << start << "\t";
			daycounter++;
		}
	}

	return daycounter;
}

bool leapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else if (year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void printYearCalender(int year, int startingDay) {
	int month, daycounter;
	bool leapyear = leapYear(year);

	for (month = 1; month <= 12; month++) {
		switch (month){
		case 1:
			cout << JAN << " " << year << endl;
			daycounter = printMonthCalender(31, startingDay);
			break;
		case 2:
			cout << FEB << " " << year << endl;
			if (leapyear) {
				daycounter = printMonthCalender(29, daycounter);
			}
			else {
				daycounter = printMonthCalender(28, daycounter);
			}
			break;
		case 3:
			cout << MAR << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		case 4:
			cout << APR << " " << year << endl;
			daycounter = printMonthCalender(30, daycounter);
			break;
		case 5:
			cout << MAY << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		case 6:
			cout << JUN << " " << year << endl;
			daycounter = printMonthCalender(30, daycounter);
			break;
		case 7:
			cout << JUL << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		case 8:
			cout << AUG << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		case 9:
			cout << SEP << " " << year << endl;
			daycounter = printMonthCalender(30, daycounter);
			break;
		case 10:
			cout << OCT << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		case 11:
			cout << NOV << " " << year << endl;
			daycounter = printMonthCalender(30, daycounter);
			break;
		case 12:
			cout << DEC << " " << year << endl;
			daycounter = printMonthCalender(31, daycounter);
			break;
		}
		cout << "\n\n";
	}
}
