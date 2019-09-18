#include<iostream>
#include<cmath>
using namespace std;

void printDivisors(int num);

int main() {
	int user_input;

	do {
		cout << "Please enter a positive integer >= 2: ";
		cin >> user_input;
	} while (user_input < 2);

	printDivisors(user_input);

	return 0;
}

void printDivisors(int num) {
	int divisor, sec_divisor;

	for (divisor = 1; divisor < sqrt(num); divisor++) {
		if (num % divisor == 0) {
			cout << divisor << ' ';
		}
	}
	for (sec_divisor = sqrt(num); sec_divisor >= 1; sec_divisor--) {
		if (num % sec_divisor == 0) {
			cout << num / sec_divisor << ' ';
		}
	}
}