/*Write a program that reads from the user a positive integer (in a decimal representation), and
prints its binary (base 2) representation.
Your program should	interact with the user exactly as it shows in the following	example:
Enter decimal number:
76
The	binary	representation	of	76	is	1001100*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int user_input;
	double binary_rep, base_10, base_exp;
	binary_rep = 0;
	base_10 = 10;
	base_exp = 0;

	cout << "Enter a decimal number: " << endl;
	cin >> user_input;
	cout << "The binary representation of " << user_input << " is ";

	while (user_input > 0) {
		user_input = user_input / 2;
		base_exp++;

		if (user_input % 2 == 1) {
			binary_rep += pow(base_10, base_exp);
		}
	}

	cout << int(binary_rep) << endl;

	return 0;
}