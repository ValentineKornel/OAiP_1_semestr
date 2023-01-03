#include <iostream>
#include <sstream>
using namespace std;

void main() {
	char str[20];
	int amount_of_words = 1;
	gets_s(str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			amount_of_words += 1;
		}
	}
	cout << amount_of_words;
}