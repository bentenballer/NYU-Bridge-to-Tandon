#include <iostream>
#include <string>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);

int main() {
	int* user_input;
	int* output;
	int arrSize, resArrSize = 0;

	cout << "Please enter the number of integers: ";
	cin >> arrSize;

	user_input = new int[arrSize];

	cout << "Please enter the integers separated by space: " << endl;
	for (int indice = 0; indice < arrSize; indice++) {
		cin >> user_input[indice];
	}

	output = findMissing(user_input, arrSize, resArrSize);

	cout << "Total Missing: " << resArrSize << "\nMissing: ";
	for (int pos = 0; pos < resArrSize; pos++) {
		cout << output[pos] << " ";
	}
	cout << endl;

	delete[] user_input;
	user_input = NULL;

	delete[] output;
	output = NULL;

	return 0;
}

int* findMissing(int arr[], int n, int& resArrSize) {
	int arrSize = 0, pos = 0, arrPhySize = 1;
	int counter;
	int* array = new int[1];
	
	while (pos < n + 1) {
		counter = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == pos) {
				counter++;
			}
		}
		if (counter == 0) {
			resArrSize++;
			if (arrSize == arrPhySize) {
				int* new_array;
				arrPhySize = 2 * arrPhySize;
				new_array = new int[arrPhySize];
				for (int i = 0; i < arrSize; i++) {
					new_array[i] = array[i];
				}
				array = new_array;
			}
			array[arrSize] = pos;
			arrSize++;
		}
		pos++;
	}
	return array;
}
