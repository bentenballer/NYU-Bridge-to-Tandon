#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void pinGenerator(char arr[], int arrSize);
void randomSequence(char arr[], int arrSize);
void printArray(char arr[], int arrSize);
string deCipher(char arr[], int arrSize, string pin);
bool authenTication(string decipher, string user_input);


const int ARRSIZE = 10;
const string PIN = "12345";


int main() {
	char arr_pin[ARRSIZE], arr_num[ARRSIZE];
	string user_input, decipher;
	bool authentication;

	cout << "Please enter your PIN according to the following mapping: " << endl;
	cout << "PIN: ";
	pinGenerator(arr_pin, ARRSIZE);
	printArray(arr_pin, ARRSIZE);

	cout << "NUM: ";
	randomSequence(arr_num, ARRSIZE);
	printArray(arr_num, ARRSIZE);

	cin >> user_input;
	decipher = deCipher(arr_num, ARRSIZE, PIN);
	

	authentication = authenTication(decipher, user_input);
	if (authentication) {
		cout << "Your PIN is correct" << endl;
	}
	else {
		cout << "Your PIN is not correct" << endl;
	}
	return 0;
}

void pinGenerator(char arr[], int arrSize) {
	char num = '0';
	for (int indice = 0; indice < arrSize; indice++) {
		arr[indice] = num + indice;
	}
}

void randomSequence(char arr[], int arrSize) {
	srand(time(0));
	int random_number;
	char num = '0';

	for (int indice = 0; indice < arrSize; indice++) {
		random_number = rand() % 3 + 1;
		arr[indice] = num + random_number;
	}
}

void printArray(char arr[], int arrSize) {
	int i;

	for (i = 0; i < arrSize; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

string deCipher(char arr[], int arrSize, string pin) {
	char num;
	string decipher;
	for (int indice = 0; indice < pin.length(); indice++) {
		for (int indice2 = 0; indice2 < arrSize; indice2++) {
			num = '0' + indice2;
			if (pin[indice] == num) {
				decipher += arr[indice2];
			}
		}
	}
	return decipher;
}

bool authenTication(string decipher, string user_input) {
	return decipher == user_input;
}



