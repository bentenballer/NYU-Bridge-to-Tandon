#include <iostream>
#include <string>
using namespace std;

int numOfWords(string user_input);
void letterCounter(string user_input);

int main() {
	string user_input;
	int word;
	cout << "Please enter a line of text:" << endl;
	getline(cin, user_input);

	word = numOfWords(user_input);
	cout << word << "\t" << "words" << endl;
	letterCounter(user_input);

	return 0;
}

int numOfWords(string user_input) {
	double num_of_words = 0;
	for (int word = 0; word < user_input.length(); word++) {
		if ((user_input[word] >= 65 && user_input[word] <= 90) || (user_input[word] >= 97 && user_input[word] <= 122)) {
			if ((word == 0 || user_input[word - 1] == 32 || user_input[word - 1] == 44 || user_input[word - 1] == 46) && (word == user_input.length() - 1 || user_input[word + 1] == 32 || user_input[word + 1] == 44 || user_input[word + 1] == 46)) {
				num_of_words++;
			}
			else if (word == 0 || user_input[word - 1] == 32 || user_input[word - 1] == 44 || user_input[word - 1] == 46) {
				num_of_words += 0.5;
			}
			else if (word == user_input.length() - 1 || user_input[word + 1] == 32 || user_input[word + 1] == 44 || user_input[word + 1] == 46) {
				num_of_words += 0.5;
			}
		}
	}
	return num_of_words;
}

void letterCounter(string user_input) {
	int count;
	for (char alphabet = 'a'; alphabet <= 'z'; alphabet++) {
		count = 0;
		for (int indice = 0; indice < user_input.length(); indice++) {
			if (user_input[indice] == alphabet || user_input[indice] + 32 == alphabet) {
				count++;
			}
		}
		if (count > 0) {
			cout << count << "\t" << alphabet << endl;
		}
	}
}