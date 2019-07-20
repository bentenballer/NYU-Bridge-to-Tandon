/*
Write a	program	that reads from	the	user two positive integers,	and	prints	the	result	of
when we add, subtract multiply,	divide,	div	and	mod	them.
Your program should	interact with the user exactly as it shows in the following	example:
Please	enter	two	positive	integers,	separated	by	a	space:
14 4
14	+	4	=	18
14 – 4	=	10
14	*	4	=	56
14	/	4	=	3.5
14	div	4	=	3
14	mod	4	=	2
*/
#include <iostream>
using namespace std;

int main() {
	int first_int, second_int;
	int sum, difference, product, div, mod;
	double fraction;

	cout << "Please enter two positive integers, seperated by a space: " << endl;
	cin >> first_int >> second_int;

	sum = first_int + second_int;
	difference = first_int - second_int;
	product = first_int * second_int;
	fraction = (double)first_int / (double)second_int;
	div = first_int / second_int;
	mod = first_int % second_int;

	cout << first_int << " + " << second_int << " = " << sum << endl;
	cout << first_int << " - " << second_int << " = " << difference << endl;
	cout << first_int << " * " << second_int << " = " << product << endl;
	cout << first_int << " / " << second_int << " = " << fraction << endl;
	cout << first_int << " div " << second_int << " = " << div << endl;
	cout << first_int << " mod " << second_int << " = " << mod << endl;

	return 0;
}
