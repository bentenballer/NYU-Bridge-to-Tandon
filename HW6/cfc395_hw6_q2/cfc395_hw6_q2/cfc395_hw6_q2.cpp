#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main() {
	int user_input;
	char user_symbol;

	cout << "Please enter the size of the triangle,"
		 << " then the character filling the tree, \nseparated by space: ";
	cin >> user_input >> user_symbol;

	printPineTree(user_input, user_symbol);

	return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
	int line, margin, space, character;

	for (line = 1; line <= n; line++) {
		for (margin = 1; margin <= m; margin++) {
			cout << " ";
		}
		for (space = n - line; space > 0; space--) {
			cout << " ";
		}
		for (character = 0; character < (2 * line) - 1; character++) {
			cout << symbol;
		}
		cout << endl;
	}
}

void printPineTree(int n, char symbol) {
	int margin, triangle, shifted_tri;
	margin = n - 1;

	for (triangle = 0; triangle < n; triangle++) {
		shifted_tri = 2 + triangle;
		printShiftedTriangle(shifted_tri, margin, symbol);
		margin--;
	}
}