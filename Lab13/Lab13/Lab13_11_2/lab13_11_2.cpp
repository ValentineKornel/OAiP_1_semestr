#include <iostream>
#include <string>
using namespace std;
void main() {
	int i;
	int n = 0;
	char str[100];
	int word_number = 1;
	int longest_word_number = 0;
	int word_position_in_string = 0;
	int longest_word = 0;
	int word_length = 0;
	int longest_word_position_in_string = 0;
	cout << "Enret the string: ";
	gets_s(str);
	int string_length = strlen(str);
	str[string_length + 1] = ' ';
	for (i = 0; i <= string_length + 1; i++) {
		if (str[i] == ' ') {
			if (word_length > longest_word) {
				longest_word_number = word_number;
				longest_word = word_length;
				if (word_number != 1) {
					longest_word_position_in_string = i - (word_length - 1);
				}
				else{
					longest_word_position_in_string = i - (word_length);
			}
			}
			word_number += 1;
			word_length = 0;
		}
		word_length += 1;
	}

    cout << "Nomber of the longest wordf: " << longest_word_number << endl;
	cout << "Position of the longest word in string: " << longest_word_position_in_string;
}