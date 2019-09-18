/*Write	a	program	that	computes	how	much	a	customer	has	to	pay	after	purchasing	two	
items.	The	price	is	calculated	according	to	the	following	rules:
• Buy	one	get	one	half	off	promotion:	the	lower	price	item	is	half	price.
• If	the	customer	is	club	card	member,	additional	10%	off.
• Tax	is	added.
Inputs	to	the	program	include:
• Two	items’	prices
• Have	club	card	or	not	(User	enters	‘Y’	or	‘y’	for	“yes”;	‘N’	or	‘n’	for	“no”)
• Tax	rate	(User	enters	the	percentage	as	a	number;	for	example	they	enter	8.25	if	the	tax	
rate	is	8.25%)
Program	displays:
• Base	price	- the	price	before	the	discounts	and	taxes	
• Price	after	discounts	- the	price	after	the	buy	one	get	one	half	off	promotion	and	the	
member’s	discount,	if	applicable	
• Total	price	– the	amount	of	money	the	customer	has	to	pay	(after	tax).
Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
Enter	price	of	first	item: 10
Enter	price	of	second	item: 20
Does	customer	have	a	club	card?	(Y/N): y
Enter	tax	rate,	e.g.	5.5	for	5.5%	tax: 8.25
Base	price: 30.0
Price	after	discounts: 22.5
Total	price:	24.35625*/

#include <iostream>
using namespace std;

const double HALF_OFF = 0.5, TWO_DECIMAL_TO_LEFT = 100, CLUB_MEMBER_TEN_PERCENT = 0.1;

int main() {
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	double item_price1, item_price2, non_discounted_item, discounted_item_price;
	char club_card;
	double tax_rate, base_price, discounted_total_price, total_price_after_tax, total_tax, club_member_discount_amount;

	cout << "Enter price of the first item: ";
	cin >> item_price1;

	cout << "Enter price of the second item: ";
	cin >> item_price2;

	cout << "Does customer have a club card? (Y/N): ";
	cin >> club_card;

	cout << "Ebter tax rat, e.g. 5.5 for 5.5% tax: ";
	cin >> tax_rate;
	tax_rate = tax_rate / TWO_DECIMAL_TO_LEFT;

	base_price = item_price1 + item_price2;

	if (item_price1 > item_price2) {
		discounted_item_price = item_price2 * HALF_OFF;
		non_discounted_item = item_price1;
	}
	else {
		discounted_item_price = item_price1 * HALF_OFF;
		non_discounted_item = item_price2;
	}

	discounted_total_price = non_discounted_item + discounted_item_price;

	if (club_card == 'Y' || club_card == 'y') {
		club_member_discount_amount = discounted_total_price * CLUB_MEMBER_TEN_PERCENT;
		discounted_total_price = discounted_total_price - club_member_discount_amount;
		total_tax = discounted_total_price * tax_rate;
		total_price_after_tax = discounted_total_price + total_tax;
	}
	else {
		total_tax = discounted_total_price * tax_rate;
		total_price_after_tax = discounted_total_price + total_tax;
	}

	


	cout << "Base price: " << base_price << endl;
	cout << "Price after discounts: " << discounted_total_price << endl;

	std::cout.precision(5);
	std::cout.setf(std::ios::fixed);
	cout << "Total price: " << total_price_after_tax << endl;

	return 0;
}