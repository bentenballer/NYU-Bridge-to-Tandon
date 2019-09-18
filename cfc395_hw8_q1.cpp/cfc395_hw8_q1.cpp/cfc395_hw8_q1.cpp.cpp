#include <iostream>
using namespace std;

void userInput(int arr[], int arrSize);
int minInArray(int arr[], int arrSize);
void minIndices(int arr[], int arrSize, int min);

const int ARRSIZE = 20;

int main() {
	int arr[ARRSIZE], min;

	cout << "Please enter 20 integers separated by a space: " << endl;
	userInput(arr, ARRSIZE);

	min = minInArray(arr, ARRSIZE);
	minIndices(arr, ARRSIZE, min);

	return 0;
}

void userInput(int arr[], int arrSize) {
	for (int start = 0; start < arrSize; start++) {
		cin >> arr[start];
	}
}

int minInArray(int arr[], int arrSize) {
	int min = arr[0];
	for (int start = 1; start < arrSize; start++) {
		if (arr[start] < min) {
			min = arr[start];
		}
	}
	return min;
}

void minIndices(int arr[], int arrSize, int min) {
	cout << "The minimum value is " << min << ", and it is located in the following indices: ";
	for (int indices = 0; indices < arrSize; indices++) {
		if (arr[indices] == min) {
			cout << indices << " ";
		}
	}
	cout << endl;
}
