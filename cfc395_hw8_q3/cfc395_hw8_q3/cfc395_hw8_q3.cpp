#include <iostream>
#include <string>
using namespace std;

void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

int main() {
	int arr1[10] = { 9, 2, 14, 12, -3 };
	int arr1Size = 5;

	int arr2[10] = { 21, 12, 6, 7, 14 };
	int arr2Size = 5;

	int arr3[10] = { 3, 6, 4, 1, 12 };
	int arr3Size = 5;

	reverseArray(arr1, arr1Size);
	printArray(arr1, arr1Size);

	removeOdd(arr2, arr2Size);
	printArray(arr2, arr2Size);

	splitParity(arr3, arr3Size);
	printArray(arr3, arr3Size);

	return 0;
}

void printArray(int arr[], int arrSize) {
	int i;

	for (i = 0; i < arrSize; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void reverseArray(int arr[], int arrSize) {
	int saved_int;
	for (int indices = 0; indices < arrSize / 2; indices++) {
		saved_int = arr[indices];
		arr[indices] = arr[arrSize - 1 - indices];
		arr[arrSize - 1 - indices] = saved_int;
	}
}

void removeOdd(int arr[], int& arrSize) {
	int even_counter;
	even_counter = 0;
	for (int indices = 0; indices < arrSize; indices++) {
		if (arr[indices] % 2 == 0) {
			arr[even_counter] = arr[indices];
			even_counter++;
		}
	}
	arrSize = even_counter;
}

void splitParity(int arr[], int arrSize) {
	int even_int;

	for (int even_indices = 0; even_indices < arrSize; even_indices++) {
		if (arr[even_indices] % 2 == 0) {
			even_int = arr[even_indices];
			for (int odd_indices = even_indices + 1; odd_indices < arrSize; odd_indices++) {
				if (arr[odd_indices] % 2 == 1) {
					arr[even_indices] = arr[odd_indices];
					arr[odd_indices] = even_int;
				}
			}
		}
	}
}