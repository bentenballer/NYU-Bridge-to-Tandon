#include <iostream>
using namespace std;

int fib(int n);

int main() {
	int user_input, fibonancci;

	do {
		cout << "Please enter a positive integer: ";
		cin >> user_input;
	} while (user_input < 1);

	fibonancci = fib(user_input);

	cout << fibonancci;

	return 0;
}

int fib(int n) {
	int num_counter, previous_num, current_num, next_num;
	previous_num = 0;
	next_num = 1;
	current_num = 1;

	for (num_counter = 1; num_counter <= n; num_counter++) {
		if (num_counter != 1) {
			current_num = previous_num + next_num;
			previous_num = next_num;
			next_num = current_num;
		}
	}
	return current_num;
}