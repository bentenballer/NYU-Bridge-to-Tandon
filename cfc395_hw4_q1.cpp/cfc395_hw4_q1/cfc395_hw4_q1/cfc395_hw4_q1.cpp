/*Write	two versions of	a program that reads a positive	integer	n, and prints the first	n even	
numbers.	
a) In the first, use a while loop.	
b) In the second, use a	for loop.	
Each section should	interact with the user exactly as it shows in the following	example:
Please	enter	a	positive	integer: 3
2
4
6*/

#include <iostream>
using namespace std;

int main() {
	int user_input_a;
	int output_a, counter_a;
	output_a = 0;
	counter_a = 0;

	cout << "section a" << endl;
	cout << "Please enter a positive integer: ";
	cin >> user_input_a;
	
	while (counter_a != user_input_a) {
		output_a += 2;
		counter_a++;
		cout << output_a << endl;
	}


	cout << endl;


	int user_input_b;
	int output_b, counter_b;
	output_b = 0;

	cout << "section b" << endl;
	cout << "Please enter a positive integer: ";
	cin >> user_input_b;

	for (counter_b = 0; counter_b < user_input_b; counter_b++) {
		output_b += 2;
		cout << output_b << endl;
	}

	return 0;
}