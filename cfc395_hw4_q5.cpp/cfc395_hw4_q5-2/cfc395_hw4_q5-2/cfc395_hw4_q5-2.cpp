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
	int user_input, counter_1, asterisks_counter_1, space_counter_1, second_space_counter_1;
	int counter_2, asterisks_counter_2, space_counter_2, second_space_counter_2;

	cout << "Please enter a positive integer: ";
	cin >> user_input;

	second_space_counter_1 = 2 * user_input;

	for (counter_1 = 1; counter_1 <= user_input; counter_1++) {
		for (space_counter_1 = 1; space_counter_1 < counter_1; space_counter_1++) {
			cout << ' ';
		}

		for (asterisks_counter_1 = 1; asterisks_counter_1 <= 2 * user_input; asterisks_counter_1++) {
			if (second_space_counter_1 > asterisks_counter_1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}

		second_space_counter_1 -= 2;
		cout << endl;
	}

	second_space_counter_2 = 2;

	for (counter_2 = user_input; counter_2 >= 1; counter_2--) {
		for (space_counter_2 = counter_2; space_counter_2 > 1; space_counter_2--) {
			cout << ' ';
		}

		for (asterisks_counter_2 = 1; asterisks_counter_2 <= 2 * user_input; asterisks_counter_2++) {
			if (second_space_counter_2 > asterisks_counter_2) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}

		second_space_counter_2 += 2;
		cout << endl;
	}

	return 0;
}