#include <iostream>
using namespace std;
void main() {
	int i;
	int n = 0;
	char str[100];
	cout << "Enret the string ";
	gets_s(str);
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		if (str[i] == ' ') {
			cout << str[i - 1];
		}
	}
	cout << str[length - 1];
	
}

