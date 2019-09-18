#include <iostream>
#include <string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main() {
	string* words_array;
	int arrSize = 0;
	string sentence;
	cout << "Please enter a sentence:" << endl;
	getline(cin, sentence);

	words_array = createWordsArray(sentence, arrSize);
	cout << "Total # of words: " << arrSize << endl;
	for (int indice = 0; indice < arrSize; indice++) {
		cout << indice + 1 << ". " << words_array[indice] << endl;
	}
	cout << endl;
	delete[] words_array;
	words_array = NULL;
	
	return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize) {
	string* arr;
	string copy = sentence;
	double arrSize = 0;

	while (copy[0] == ' ') {
		copy = copy.substr(1);
	}

	while (copy[copy.length() - 1] == ' ') {
		copy = copy.substr(0, copy.length() - 1);
	}

	for (int indice = 0; indice < copy.length(); indice++) {
		if ((copy[indice] >= 'a' && copy[indice] <= 'z') || (copy[indice] >= 'A' && copy[indice] <= 'Z')) {
			if ((indice == 0 || copy[indice - 1] == ' ') && (indice == copy.length() - 1 || copy[indice + 1] == ' ')) {
				arrSize++;
			}
			else if (indice == 0 || copy[indice - 1] == ' ') {
				arrSize += 0.5;
			}
			else if (indice == copy.length() - 1 || copy[indice + 1] == ' ') {
				arrSize += 0.5;
			}
			/*if (copy[indice] == ' ') {
				outWordsArrSize++;
			}*/
		}
		//outWordsArrSize++;
	}

	outWordsArrSize = arrSize;
	arr = new string[outWordsArrSize];

	for (int position = 0; position < outWordsArrSize; position++) {
		while (copy[0] == ' ') {
			copy = copy.substr(1);
		}
		int pos = copy.find(' ');
		string word = copy.substr(0, pos);
		arr[position] = word;
		copy = copy.substr(pos + 1);
	}
	
	return arr;
}
