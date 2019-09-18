#include <iostream>
#include <vector>
#include <string>
using namespace std;

void main1();
void main2();


int main() {
	main1();
	main2();
	return 0;
}

void main1() {
	int* num_array;
	int arrSize;
	int arrPhySize;
	bool end = false;
	int num, search;
	cout << "Please enter a sequence of positive integers, each in a separate line. End your input by typing -1." << endl;

	num_array = new int[1];
	arrPhySize = 1;
	arrSize = 0;

	while (end == false) {
		cin >> num;
		if (num == -1) {
			end = true;
		}
		else {
			if (arrSize == arrPhySize) {
				arrPhySize = 2 * arrPhySize;
				int* new_num_array;
				new_num_array = new int[arrPhySize];
				for (int i = 0; i < arrSize; i++) {
					new_num_array[i] = num_array[i];
				}
				num_array = new_num_array;
			}
			num_array[arrSize] = num;
			arrSize++;
		}
	}

	cout << "Please enter a number you want to search: " << endl;
	cin >> search;

	cout << search << " shows in lines: ";
	for (int i = 0; i < arrSize; i++) {
		if (num_array[i] == search) {
			cout << i + 1 << " ";
		}
	}
	cout << "\n\n";
	delete[] num_array;
	num_array = NULL;
}

void main2() {
	vector <int> array;
	int num, search;
	bool end = false;

	cout << "Please enter a sequence of positive integers, each in a separate line. End your input by typing -1." << endl;
	
	while (end == false) {
		cin >> num;
		if (num == -1) {
			end = true;
		}
		else {
			array.push_back(num);
		}
	}

	cout << "Please enter a number you want to search: " << endl;
	cin >> search;
	cout << search << " shows in lines: ";
	for (int i = 0; i < array.size(); i++) {
		if (array[i] == search) {
			cout << i + 1 << " ";
		}
	}
	cout << "\n\n";
}