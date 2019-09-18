#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);
void palindromeOutput(string user_input, bool ispalindrome);

int main() {
	string user_input;
	bool palindrome;

	cout << "Please enter a word: ";
	cin >> user_input;
	
	palindrome = isPalindrome(user_input);
	palindromeOutput(user_input, palindrome);

	return 0;
}

bool isPalindrome(string str) {
	string palindrome;

	for (int indices = str.length() - 1; indices >= 0; indices--) {
		if (str[indices] >= 65 && str[indices] <= 90) {
			str[indices] += 32;
		}
		palindrome += str[indices];
	}

	return palindrome == str;
}

void palindromeOutput(string user_input, bool ispalindrome) {
	if (ispalindrome) {
		cout << user_input << " is a palindrome" << endl;
	}
	else {
		cout << user_input << " is a not a palindrome" << endl;
	}
}