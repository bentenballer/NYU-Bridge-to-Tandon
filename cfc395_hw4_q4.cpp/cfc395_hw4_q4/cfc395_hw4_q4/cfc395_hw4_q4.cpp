/*Your two versions should read the integer sequence in two ways :
a) First read the length of the sequence.
For example, an execution would look like :
Please enter the length of the sequence : 3
Please enter your sequence :
1
2
3
The geometric mean is : 1.8171
b) Keep reading the numbers until - 1 is entered.
For example, an execution would look like :
Please enter a non - empty sequence of positive integers, each one in a separate line.End your
sequence by typing - 1 :
	1
	2
	3
	- 1
	The geometric mean is : 1.8171*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	std::cout.precision(4);
	std::cout.setf(std::ios::fixed);

	double sequence_length_a, sequence_a, user_input_a, product_of_input_a;
	double geometric_mean_a, nth_root_a;
	product_of_input_a = 1;

	cout << "section a" << endl;
	cout << "Please enter the length of the sequence: ";
	cin >> sequence_length_a;
	cout << "Please enter your sequence: " << endl;

	for (sequence_a = 0; sequence_a < sequence_length_a; sequence_a++) {
		cin >> user_input_a;
		product_of_input_a *= user_input_a;
	}

	nth_root_a = 1 / sequence_length_a;
	geometric_mean_a = pow((product_of_input_a), nth_root_a);
	cout << "The geometric mean is: " << geometric_mean_a << endl;


	cout << endl;


	double sequence_b, user_input_b, product_of_input_b;
	double geometric_mean_b, nth_root_b;
	bool end_the_sequence;
	product_of_input_b = 1;
	sequence_b = 0;
	end_the_sequence = false;

	cout << "section b" << endl;
	cout << "Please enter a non - empty sequence of positive integers, each one in a separate line. End your sequence by typing -1 :" << endl;

	while (end_the_sequence == false) {
		cin >> user_input_b;
		if (user_input_b == -1) {
			end_the_sequence = true;
		}
		else {
			product_of_input_b *= user_input_b;
			sequence_b++;
		}
	}

	nth_root_b = 1 / sequence_b;
	geometric_mean_b = pow(product_of_input_b, nth_root_b);
	cout << "The geometric mean is " << geometric_mean_b << endl;

	return 0;
}