#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

void main() {
	int c = 1;
	do {
		switch (c) {
		case 1: {
			string str;
			int amount_of_words = 1;
			getline(cin, str);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == ' ') {
					amount_of_words += 1;
				}
			}
			cout << amount_of_words;
			break;
		}
		case 2: {cout << "Hello"; }
		}
		cin >> c;
	} while (c != 7);
}