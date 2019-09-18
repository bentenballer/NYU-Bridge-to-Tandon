#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main() {
	int user_input, min, min2;
	int amicable_count_1, amicable_sum_1, amicable_count_2, amicable_sum_2;

	do {
		cout << "Please enter a positive interger M (>= 2): ";
		cin >> user_input;
	} while (user_input < 2);

	cout << "\nThe following are all the perfect numbers between 2 and M:" << endl;
	for (min = 2; min < user_input; min++) {
		if (isPerfect(min)){
			cout << min << " ";
		}
	}
	cout << endl;

	cout << "\nThe following are all the amicable numbers between 2 and M:" << endl;
	for (min2 = 2; min2 < user_input; min2++) {
		analyzeDividors(min2, amicable_count_1, amicable_sum_1);
		analyzeDividors(amicable_sum_1, amicable_count_2, amicable_sum_2);
		if (amicable_sum_2 == min2 && amicable_sum_2 < user_input && min2 != amicable_sum_1) {
			cout << min2 << " ";
		}
	}
	cout << endl;

	return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
	int first_counter, second_counter;
	outCountDivs = 0;
	outSumDivs = 0;

	if (num >= 2) {
		for (first_counter = 1; first_counter < sqrt(num); first_counter++){
			if (num % first_counter == 0) {
				outCountDivs++;
				outSumDivs += first_counter;
			}
		}
		for (second_counter = sqrt(num); second_counter > 1; second_counter--) {
			if (num % (num / second_counter) == 0) {
				outCountDivs++;
				outSumDivs += (num / second_counter);
			}
		}
	}
}

bool isPerfect(int num) {
	int outCountDivs, outSumDivs;
	analyzeDividors(num, outCountDivs, outSumDivs);

	return outSumDivs == num;
}
