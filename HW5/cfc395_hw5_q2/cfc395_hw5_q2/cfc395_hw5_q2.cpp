/*Implement	a	number	guessing	game.	The	program	should	randomly	choose	an	integer	
between	1	and	100	(inclusive),	and	have	the	user	try	to	guess	that	number.	*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int random_integer, number_of_guesses, user_guess, range_low, range_hi;
	srand(time(0));
	random_integer = (rand() % 100) + 1;
	range_low = 1;
	range_hi = 100;
	number_of_guesses = 5;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
	cout << "Range: [" << range_low << "," << range_hi << "], Number of guesses left: " << number_of_guesses << endl;
	cout << "Your guess: ";
	cin >> user_guess;

	while (user_guess != random_integer) {
		number_of_guesses--;
		if (user_guess < random_integer) {
			if (number_of_guesses == 0) {
				cout << "Out of guesses! My number is " << random_integer << endl;
				break;
			}
			cout << "Wrong! My number is bigger." << endl;
			range_low = user_guess + 1;
			cout<< endl << "Range: [" << range_low << "," << range_hi << "], Number of guesses left: " << number_of_guesses << endl;
			cout << "Your guess: ";
			cin >> user_guess;
		}
		else {
			if (number_of_guesses == 0) {
				cout << "Out of guesses! My number is " << random_integer << endl;
				break;
			}
			cout << "Wrong! My number is smaller." << endl;
			range_hi = user_guess - 1;
			cout << endl << "Range: [" << range_low << "," << range_hi << "], Number of guesses left: " << number_of_guesses << endl;
			cout << "Your guess: ";
			cin >> user_guess;
		}
	}

	if (user_guess == random_integer) {
		cout << "Congrats! You guessed my number in " << number_of_guesses << " guesses." << endl;
	}

	return 0;
}
