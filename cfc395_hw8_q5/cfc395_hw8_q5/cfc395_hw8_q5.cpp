#include <iostream>
#include <string>
using namespace std;

void nameInput(string& first_name, string& middle_name, string& last_name);
void nameOutput(string& first_name, string& middle_name, string& last_name);

int main(){
	string first_name, middle_initial, last_name;

	nameInput(first_name, middle_initial, last_name);
	nameOutput(first_name, middle_initial, last_name);

	return 0;
}
void nameInput(string& first_name, string& middle_name, string& last_name) {
	cout << "Please enter your first name, middle name and last name separated by space: " << endl;
	cin >> first_name >> middle_name >> last_name;
}

void nameOutput(string& first_name, string& middle_name, string& last_name) {
	char middle_initial = middle_name[0];

	if (first_name[0] >= 97 && first_name[0] <= 122) {
		first_name[0] -= 32;
	}
	for (int first_indice = 1; first_indice < first_name.length(); first_indice++){
		if (first_name[first_indice] >= 65 && first_name[first_indice] <= 90) {
			first_name[first_indice] += 32;
		}
	}
	
	if (middle_initial >= 97 && middle_initial <= 122) {
		middle_initial -= 32;
	}
	if (last_name[0] >= 97 && last_name[0] <= 122) {
		last_name[0] -= 32;
	}
	for (int last_indice = 1; last_indice < last_name.length(); last_indice++) {
		if (last_name[last_indice] >= 65 && last_name[last_indice] <= 90) {
			last_name[last_indice] += 32;
		}
	}

	cout << last_name << "," << first_name << " " << middle_initial << "." << endl;
}