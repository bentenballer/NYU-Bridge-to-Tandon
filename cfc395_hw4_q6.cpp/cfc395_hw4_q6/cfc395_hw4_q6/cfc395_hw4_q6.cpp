/*Write	a	program	that	asks	the user	to	input	a	positive	integer	n,	and	print	all	of	the	numbers	
from	1	to	n that	have	more	even	digits	than	odd	digits.
For	example,	if	n=30,	the	program	should	print:
2
4
6
8
20
22
24
26
28*/

#include <iostream>
using namespace std;

int main() {
	int user_input, counter, check_number, check_this_digit, odd_counter, even_counter;

	cout << "Please enter a positive integer: ";
	cin >> user_input;

	for (counter = 1; counter <= user_input; counter++) {
		check_number = counter;
		even_counter = 0;
		odd_counter = 0;

		if ((counter % 2 == 0) && (counter / 10 == 0)) {
			cout << counter << endl;
		}
		else {
			while (check_number) {
				check_this_digit = check_number % 10;
				check_number = check_number / 10;

				if (check_this_digit % 2 == 0) {
					even_counter++;
				}
				else {
					odd_counter++;
				}
			}

			if (even_counter > odd_counter) {
				cout << counter << endl;
			}
		}
	}

	return 0;
}