#include <iostream>
using namespace std;
void main() {
	int i;
	int n = 0;
	char str[100];
	char revers_str[100];
	cout << "Enret the string ";
	cin >> str;
	int m = strlen(str);
	for (i = m; i > -1; i--) {
		revers_str[n] = str[i];
		n += 1;
	}
	for (i = 0; i <= m; i++) {
		cout << revers_str[i];
	}
}