#include <iostream>
#include <string>
using namespace std;
void main() {
	int i, k;
	int n = 0;
	char str[100];
	cout << "Enret the string ";
	gets_s(str);
	int m = strlen(str);
	cout << "Enter k";
	cin >> k;
	if (*(str + k) == ' ') {
		for (i = 0; i < k; i++) {
			cout << *(str + i);
		}
		cout << endl;
		for (i = k + 1; i < m; i++) {
			cout << *(str + i);
		}
	}
	else {
		while (*(str + k) != ' ') {
			k--;
		}
		for (i = 0; i < k; i++) {
			cout << *(str + i);
		}
		cout << endl;
		for (i = k + 1; i < m; i++) {
			cout << *(str + i);
		}
	}
	
}