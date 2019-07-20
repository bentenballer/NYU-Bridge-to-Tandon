/* Write a program that	asks the user to enter an amount of	money in the format	of dollars and	
remaining cents. The program should	calculate and print	the	minimum	number of coins	
(quarters, dimes,  nickels and pennies)	that are equivalent	to	the	given amount.
Hint: In order to find the minimum number of coins,	first find the maximum	number	of	
quarters that fit in the given amount of money, then find the maximum number of	dimes	
thatn fit in the remaining amount, and so on.
Your program should	interact with the user exactly as it shows in the following	example:
Please	enter	your	amount	in	the	format	of	dollars	and	cents	separated	by	a	space:
4 37
4 dollars and 37 cents are:
17 quarters, 1 dimes, 0	nickels	and	2 pennies */

#include <iostream>
using namespace std;
const int QUARTER_VALUE = 25, DIME_VALUE = 10, NICKEL_VALUE = 5, PENNY_VALUE = 1, DOLLAR_VALUE = 100;

int main() {
	int dollar, cents;
	int quarters, dimes, nickels, pennies;
	int total_coins, remaining_coins, total_coins_in_quarter, total_coins_in_dime, total_coins_in_nickel;

	cout << "Please enter your amount in the format of dollars and cents separated by a space: " << endl;
	cin >> dollar >> cents;
	cout << dollar << " dollars and " << cents << " cents are:" << endl;

	total_coins = (dollar * DOLLAR_VALUE) + cents;

	quarters = total_coins / QUARTER_VALUE;
	total_coins_in_quarter = quarters * QUARTER_VALUE;
	remaining_coins = total_coins - total_coins_in_quarter;

	dimes = remaining_coins / DIME_VALUE;
	total_coins_in_dime = dimes * DIME_VALUE;
	remaining_coins = remaining_coins - total_coins_in_dime;

	nickels = remaining_coins / NICKEL_VALUE;
	total_coins_in_nickel = nickels * NICKEL_VALUE;
	remaining_coins = remaining_coins - total_coins_in_nickel;

	pennies = remaining_coins / PENNY_VALUE;

	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

	return 0;
}
