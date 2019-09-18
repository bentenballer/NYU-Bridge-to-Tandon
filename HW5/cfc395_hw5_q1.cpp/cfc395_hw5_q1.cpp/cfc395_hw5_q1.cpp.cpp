/*Write a program that reads a positive integer n from the user and prints out a nxn
multiplication table. The columns should be spaced by a tab.*/

#include <iostream>
using namespace std;

int main() {
	int user_input, rows, columns, counter;

	cout << "Please enter a positive integer: " << endl;
	cin >> user_input;

	for (rows = 1; rows <= user_input; rows++) {
		for (counter = 1, columns = rows * counter; counter <= user_input, columns <= rows * user_input; counter++, columns = rows * counter) {
			cout << columns << "\t";
		}
		cout << endl;
	}

	return 0;
}
