#include <iostream>
using namespace std;

double eApprox(int n);

int main() {
	cout.precision(30);
	
	for (int n = 1; n <= 15; n++) {
		cout << "n = " << n << '\t' << eApprox(n) << endl;
	}

	return 0;
}

double eApprox(int n) {
	double e, num, sum, product, approx;
	e = 1;
	product = 1;
	sum = 0;

	for (num = 1; num <= n; num++) {
		product *= num;
		approx = 1 / product;
		sum += approx;
	}

	e += sum;

	return e;
}