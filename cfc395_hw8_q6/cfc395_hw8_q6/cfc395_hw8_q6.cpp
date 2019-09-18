#include <iostream>
#include <string>
using namespace std;

void userInput(string& input);
void outputReplace(string& input);
bool partOfaWord(string& input, int indice);

int main() {
	string user_input;
	userInput(user_input);
	outputReplace(user_input);

	return 0;
}

void userInput(string& input) {
	cout << "Please enter a line of text: " << endl;
	getline(cin, input);
}

void outputReplace(string& input) {
	for (int indice = 0; indice < input.length(); indice++) {
		if (input[indice] > 47 && input[indice] < 58) {
			if (partOfaWord(input, indice) == false) {
				input[indice] = 'x';
				cout << input[indice];
			}
			else {
				cout << input[indice];
			}
		}
		else {
			cout << input[indice];
		}
	}
	cout << endl;
}

bool partOfaWord(string& input, int indice) {
	int word_indice = indice;
	int word_indice_2 = indice;
	int part_of_a_word = 0;

	while (word_indice < input.length() && input[word_indice] != 32) {
		if (input[word_indice] < 47 || input[word_indice] > 58) {
			part_of_a_word++;
		}
		word_indice++;
	}

	while (word_indice_2 > 0 && input[word_indice_2] != 32) {
		if (input[word_indice_2] < 47 || input[word_indice_2] > 58 && input[word_indice_2] != 120) {
			part_of_a_word++;
		}
		word_indice_2--;
	}

	return part_of_a_word;
}