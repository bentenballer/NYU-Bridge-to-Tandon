#include<iostream>
#include<string>

using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main() {
	int arrSize, *arr;

	cout << "Please enter the array size: ";
	cin >> arrSize;
	cout << "Please enter the integers separated by space: " << endl ;
	arr = new int[arrSize];
	for (int indice = 0; indice < arrSize; indice++) {
		cin >> arr[indice];
	}

	oddsKeepEvensFlip(arr, arrSize);
	for (int position = 0; position < arrSize; position++) {
		cout << arr[position] << " ";
	}

	return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize) {
	int even_indice = 0, even_num = arr[0], odd_indice = 0, even_counter = 0, reorder_indice = 0, used = 0;

	for (int indice = 0; indice < arrSize; indice++) {
		if (arr[indice] % 2 == 0) {
			even_counter++;
		}
	}

	for (int counter = 0; counter < even_counter; counter++) {
		for (int position = 0; position < arrSize; position++) {
			if (arr[position] % 2 == 0) {
				even_indice = position;
				even_num = arr[position];
			}
			else if (arr[position] % 2 == 1 && position > even_indice && even_num % 2 == 0) {
				arr[even_indice] = arr[position];
				arr[position] = even_num;
				even_indice = position;
			}
		}
	}

	for (int reverse = arrSize - 1; reverse > 0; reverse--) {
		if (arr[reverse] % 2 == 1) {
			odd_indice = reverse;
			break;
		}
	}

	even_counter = even_counter / 2;
	odd_indice = odd_indice + 1;

	for (int reorder = odd_indice; reorder < odd_indice + even_counter; reorder++){
		used = arr[reorder];
		arr[reorder] = arr[arrSize - 1 - reorder_indice];
		arr[arrSize - 1 - reorder_indice] = used;
		reorder_indice++;
	}
}