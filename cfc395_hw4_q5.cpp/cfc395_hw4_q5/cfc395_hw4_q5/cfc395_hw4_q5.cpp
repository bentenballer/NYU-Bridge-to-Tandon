/*Write a program that asks the user to input a positive integer n, and prints a textual image of an
hourglass made of 2n lines with asterisks.
For example if n=4, the program should print:
*******
 *****
  ***
   *
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main() {
	int user_input, user_input_times_two, counter, asterisks_counter, space_counter, second_space_counter;

	cout << "Please enter a positive integer: ";
	cin >> user_input;
	user_input_times_two = 2 * user_input;
	second_space_counter = 2 * user_input;

	for (counter = 1; counter <= user_input_times_two; counter++) {
		if (counter <= user_input) {
			for (space_counter = 1; space_counter < counter; space_counter++) {
				cout << ' ';
			}
			for (asterisks_counter = 1; asterisks_counter <= user_input_times_two; asterisks_counter++) {
				if (second_space_counter > asterisks_counter) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}

			if (second_space_counter > 2) {
				second_space_counter -= 2;
			}
			cout << endl;
		}

		else {
			for (space_counter = (user_input_times_two - counter); space_counter > 0; space_counter--) {
				cout << ' ';
			}
			for (asterisks_counter = 1; asterisks_counter <= user_input_times_two; asterisks_counter++) {
				if (second_space_counter > asterisks_counter) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			second_space_counter += 2;
			cout << endl;
		}
	}

	return 0;
}