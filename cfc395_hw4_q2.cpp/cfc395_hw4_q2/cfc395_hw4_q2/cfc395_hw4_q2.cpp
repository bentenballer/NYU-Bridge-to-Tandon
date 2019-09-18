/*Your	program	should	interact with the user exactly as it shows	in	the	following example:
Enter decimal number:
147
147 is CXXXXVII*/

#include <iostream>
using namespace std;

const char ROMAN_1 = 'I', ROMAN_5 = 'V', ROMAN_10 = 'X', ROMAN_50 = 'L', ROMAN_100 = 'C', ROMAN_500 = 'D', ROMAN_1000 = 'M';
const int THOUSAND = 1000, FIVE_HUNDRED = 500, HUNDRED = 100, FIFTY = 50, TEN = 10, FIVE = 5, ONE = 1;

int main() {
	int user_input;
	int m_loop, c_loop, x_loop, i_loop;
	

	cout << "Enter a decimal number: " << endl;
	cin >> user_input;
	cout << user_input << " is ";

	for (m_loop = user_input / THOUSAND; m_loop > 0; m_loop--) {
		cout << ROMAN_1000;
	}
	user_input = user_input % THOUSAND;

	if (user_input / FIVE_HUNDRED >= 1) {
		cout << ROMAN_500;
		user_input = user_input - FIVE_HUNDRED;
	} 

	if (user_input / HUNDRED >= 4) {
		for (c_loop = 4; c_loop > 0; c_loop--) {
			cout << ROMAN_100;
			user_input = user_input - HUNDRED;
		}
	}
	else {
		for (c_loop = user_input / HUNDRED; c_loop > 0; c_loop--) {
			cout << ROMAN_100;
			user_input = user_input - HUNDRED;
		}
	}

	if (user_input / FIFTY >= 1) {
		cout << ROMAN_50;
		user_input = user_input - FIFTY;
	}

	if (user_input / TEN >= 4) {
		for (x_loop = 4; x_loop > 0; x_loop--) {
			cout << ROMAN_10;
			user_input = user_input - TEN;
		}
	}
	else {
		for (x_loop = user_input / TEN; x_loop > 0; x_loop--) {
			cout << ROMAN_10;
			user_input = user_input - TEN;
		}
	}

	if (user_input / FIVE >= 1) {
		cout << ROMAN_5;
		user_input = user_input - FIVE;
	}

	if (user_input / ONE >= 4) {
		for (i_loop = 4; i_loop > 0; i_loop--) {
			cout << ROMAN_1;
			user_input = user_input - ONE;
		}
	}
	else {
		for (i_loop = user_input / ONE; i_loop > 0; i_loop--) {
			cout << ROMAN_1;
			user_input = user_input - ONE;
		}
	}

	cout << endl;

	return 0;
}