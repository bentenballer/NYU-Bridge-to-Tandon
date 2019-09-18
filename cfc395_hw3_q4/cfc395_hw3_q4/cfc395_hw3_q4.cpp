/*Define	the	following	constants:
const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
Write	a	program	that	asks	the	user	to	enter	a	Real	number,	then	it	asks	the	user	to	enter	the
method	by	which	they	want	to	round	that	number	(floor,	ceiling	or	to	the	nearest	integer).	
The	program	will	then	print	the	rounded	result.
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	a	Real	number:
4.78
Choose	your	rounding method:
1.	Floor	round
2.	Ceiling	round
3.	Round	to	the	nearest	whole	number
2
5
Implementation	requirement:	Use	a	switch statement.*/

#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1, CEILING_ROUND = 2, ROUND = 3;

int main() {
	double user_real_number, rounding_difference_floor, rounding_difference_ceiling;
	int user_rounding_method, floor_round_number, ceiling_round_number;

	cout<< "Please enter a Real number:" << endl;
	cin >> user_real_number;

	cout << "Choose your rounding method: " << endl;
	cout << "1. Floor round" << endl;
	cout << "2. Ceiling round" << endl;
	cout << "3. Round to the nearest whole number" << endl;
	cin >> user_rounding_method;

	floor_round_number = int(user_real_number);
	ceiling_round_number = floor_round_number + 1;
	rounding_difference_floor = user_real_number - double(floor_round_number);
	rounding_difference_ceiling = double(ceiling_round_number) - user_real_number;

	switch (user_rounding_method) {
		case FLOOR_ROUND:
			cout << floor_round_number << endl;
			break;
		case CEILING_ROUND:
			cout << ceiling_round_number << endl;
			break;
		case ROUND:
			if (rounding_difference_ceiling > rounding_difference_floor) {
				cout << floor_round_number << endl;
			}
			else {
				cout << ceiling_round_number << endl;
			}
			break;
		default:
			cout << "Invalid Input!" << endl;
			break;
	}

	return 0;
}