#include <iostream>
#include <string>
using namespace std;

void letterArray(char*& arr, string user_input, int& arrSize);
bool comparStringArray(char*& arr1, char*& arr2, int arrSize1, int arrSize2);

int main() {
	string user_input1, user_input2;
	int arrSize1, arrSize2;
	bool anagrams;

	cout << "Please enter the first string: " << endl;
	getline(cin, user_input1);
	cout << "Please enter the second string: " << endl;
	getline(cin, user_input2);

	arrSize1 = user_input1.length();
	arrSize2 = user_input2.length();
	char* arr1 = new char[arrSize1];
	char* arr2 = new char[arrSize2];

	letterArray(arr1, user_input1, arrSize1);
	letterArray(arr2, user_input2, arrSize2);

	anagrams = comparStringArray(arr1, arr2, arrSize1, arrSize2);

	if (anagrams) {
		cout << "This is an anagram!" << endl;
	}
	else {
		cout << "This is not an anagram!" << endl;
	}

	delete [] arr1;
	delete [] arr2;
	arr1 = NULL;
	arr2 = NULL;

	return 0;
}



void letterArray(char*& arr, string user_input, int& arrSize) {
	int newSize = 0;
	for (char alphabet = 'a'; alphabet <= 'z'; alphabet++) {
		for (int indice = 0; indice < user_input.length(); indice++) {
			if (user_input[indice] == alphabet || user_input[indice] + 32 == alphabet) {
				arr[newSize] = alphabet;
				newSize++;
			}
		}
	}

	arrSize = newSize;
}



bool comparStringArray(char*& arr1, char*& arr2, int arr1Size, int arr2Size) {
	bool anagrams = true;

	if (arr1Size != arr2Size) {
		anagrams = false;
	}

	for (int indice = 0; indice <arr1Size; indice++) {
		if (arr1[indice] != arr2[indice]) {
			anagrams = false;
		}
	}
	return anagrams;
}