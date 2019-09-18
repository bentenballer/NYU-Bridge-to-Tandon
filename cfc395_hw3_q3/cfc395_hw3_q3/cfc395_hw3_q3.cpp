/*Write	a	program	that	does	the	following:
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Please	enter	value	of	a: 1
Please	enter	value	of	b: 4
Please	enter	value	of	c: 4
This	equation	has	a	single	real	solution	x=-2.0*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	double a, b, c, first_x, second_x, number_of_solution;
	double b_square, product_of_4ac, product_of_2a;

	cout << "Please enter value of a: ";
	cin >> a;

	cout << "Please enter value of b: ";
	cin >> b;

	cout << "Please enter value of c: ";
	cin >> c;
	

	b_square = b * b;
	product_of_4ac = 4 * a * c;
	product_of_2a = 2 * a;

	first_x = ((-b) + sqrt(b_square - product_of_4ac)) / product_of_2a;
	second_x = ((-b) - sqrt(b_square - product_of_4ac)) / product_of_2a;
	number_of_solution = b_square - product_of_4ac;

	if (a == 0 && b == 0 && c == 0) {
		cout << "Infinite number of solutions" << endl;
	}
	else if (a == 0 && b == 0) {
		cout << "No solution" << endl;
	}
	else if (a == 0 || number_of_solution < 0) {
		cout << "No real solution" << endl;
	}
	else if (number_of_solution == 0) {
		cout << "This equation has a single real solution x=" << first_x << endl;
	}
	else {
		cout << "This equation has two real solution x=" << first_x << "and x=" << second_x << endl;
	}

	return 0;
}