/*Write	a	program	that:
• Asks	the	user	for	their	name.
• Asks	the	user	to	input	their	graduation	year.
• Asks	the	user	to	input	the	current	year.
Assume	the	student	is	in	a	four-year	undergraduate	program.	Display	the	current	status	the	
student	is	in.	Possible	status	include:	not	in	college	yet,	freshman,	sophomore,	junior,	senior,	
graduated.	
Note:	If	graduation	year	equals	to	current	year,	status	is	‘Graduated’;	if	graduation	year	is	
four	years	after	current	year,	status	is	‘Freshman’,	etc.
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	your	name: Jessica
Please	enter	your	graduation	year: 2019
Please	enter	current	year: 2015
Jessica,	you	are	a	Freshman*/

#include <iostream>
#include <string>
using namespace std;

const int FRESHMAN = 4, SOPHOMORE = 3, JUNIOR = 2, SENIOR = 1;

int main() {
	string student_name; 
	int current_year, graduation_year, year_difference;

	cout << "Please enter your name: ";
	cin >> student_name;

	cout << "Please enter your graduation year: ";
	cin >> graduation_year;

	cout << "Please enter current year: ";
	cin >> current_year;

	year_difference = graduation_year - current_year;
	
	if (year_difference > FRESHMAN) {
		cout << "Not in college yet" << endl;
	}
	else if (year_difference == FRESHMAN) {
		cout << student_name << ", you are a Freshman" << endl;
	}
	else if (year_difference == SOPHOMORE) {
		cout << student_name << ", you are a Sophomore" << endl;
	}
	else if (year_difference == JUNIOR) {
		cout << student_name << ", you are a Junior" << endl;
	}
	else if (year_difference == SENIOR) {
		cout << student_name << ", you are a Senior" << endl;
	}
	else {
		cout << "Graduated" << endl;
	}

	return 0;
}
