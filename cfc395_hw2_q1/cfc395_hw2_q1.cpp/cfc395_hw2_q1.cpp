/*Question	1:
Write a	program	that asks the user to enter	a number of	quarters, dimes, nickels and pennies and then outputs the monetary
value of the coins in the format of	dollars and remaining cents.

Your program should	interact with the user exactly as it shows in the following	example:
Please enter number of coins:
# of quarters: 13
# of dimes: 4
# of nickels: 11
# of pennies: 17
The total is 4 dollars and 37 cents
*/

#include <iostream>
using namespace std;
const int QUARTERS_VALUE = 25, DIMES_VALUE = 10, NICKELS_VALUE = 5, PENNIES_VALUE = 1, DOLLAR_VALUE = 100;

int main() {
	int quarters, dimes, nickels, pennies;
	int total_quarters, total_dimes, total_nickels, total_pennies, total_coins;
	int dollar, cents;

	cout << "Please enter number of coins:" << endl;
	cout << "# of quarters: ";
	cin >> quarters;
	cout << "# of dimes: ";
	cin >> dimes;
	cout << "# of nickels: ";
	cin >> nickels;
	cout << "# of pennies: ";
	cin >> pennies;

	total_quarters = quarters * QUARTERS_VALUE;
	total_dimes = dimes * DIMES_VALUE;
	total_nickels = nickels * NICKELS_VALUE;
	total_pennies = pennies * PENNIES_VALUE;
	total_coins = total_quarters + total_dimes + total_nickels + total_pennies;

	dollar = total_coins / DOLLAR_VALUE;
	cents = total_coins % DOLLAR_VALUE;

	cout << "The total is " << dollar << " dollars and " << cents <<" cents";

	return 0;
}