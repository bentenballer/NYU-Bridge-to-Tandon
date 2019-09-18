#include <iostream>
#include <string>

using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);

int main() {
	int array_size;
	int* arr;
	//int outPosArrSize = 0;
	//int* pos;
	//int* outPosArr;
	//int* outPosArrSizePtr = &outPosArrSize;
	//int** outPosArrPtr;

	cout << "Please enter the array size: ";
	cin >> array_size;

	arr = new int[array_size];
	cout << "Please enter numbers separated by space: " << endl;
	for (int position = 0; position < array_size; position++) {
		cin >> arr[position];
	}

	//version 1
	/*pos = getPosNums1(arr, array_size, outPosArrSize);
	for (int indice = 0; indice < outPosArrSize; indice++) {
		cout << pos[indice] << " ";
	}*/

	//version 2
	/*getPosNums2(arr, array_size, outPosArr, outPosArrSize);
	for (int indice = 0; indice < outPosArrSize; indice++) {
		cout << outPosArr[indice] << " ";
	}*/

	//version 3
	/*pos = getPosNums3(arr, array_size, outPosArrSizePtr);
	for (int indice = 0; indice < *outPosArrSizePtr; indice++) {
		cout << pos[indice] << " ";
	}*/

	//version 4
	/*outPosArrPtr = &arr;
	getPosNums4(arr, array_size, outPosArrPtr, outPosArrSizePtr);
	for (int indice = 0; indice < *outPosArrSizePtr; indice++) {
		cout << outPosArrPtr[0][indice] << " ";
	}*/

	return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize) {
	int* temp = new int[arrSize];
	int newSize = 0;

	for (int indice = 0; indice < arrSize; indice++) {
		if (arr[indice] > 0) {
			temp[newSize] = arr[indice];
			newSize++;
		}
	}
	outPosArrSize = newSize;
	delete[] arr;
	arr = new int[outPosArrSize];
	arr = temp;
	return arr;
}

void getPosNums2(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
	int* temp = new int[arrSize];
	int newSize = 0;

	for (int indice = 0; indice < arrSize; indice++) {
		if (arr[indice] > 0) {
			temp[newSize] = arr[indice];
			newSize++;
		}
	}
	outPosArrSize = newSize;
	outPosArr = new int[outPosArrSize];
	outPosArr = temp;
	delete[] arr;
}

int* getPosNums3(int* arr, int arrSize, int* outPosArrSizePtr) {
	int* temp = new int[arrSize];
	int newSize = 0;

	for (int indice = 0; indice < arrSize; indice++) {
		if (arr[indice] > 0) {
			temp[newSize] = arr[indice];
			newSize++;
		}
	}
	*outPosArrSizePtr = newSize;
	delete[] arr;
	arr = new int[*outPosArrSizePtr];
	arr = temp;
	return arr;
}

void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr) {
	int* temp = new int[arrSize];
	int newSize = 0;

	for (int indice = 0; indice < arrSize; indice++) {
		if (arr[indice] > 0) {
			temp[newSize] = arr[indice];
			newSize++;
		}
	}
	*outPosArrSizePtr = newSize;
	delete[] *outPosArrPtr;
	*outPosArrPtr = new int[*outPosArrSizePtr];
	*outPosArrPtr = temp;
}