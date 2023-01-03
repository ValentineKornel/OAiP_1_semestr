#include <iostream>
#include <sstream>
using namespace std;

void main() {
	string str;
	int sum_of_symb = 0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		sum_of_symb += int(str[i]);
		if (str[i] == ' ') {
			cout << sum_of_symb << " ";
			sum_of_symb = 0;
		}
	}
	cout << sum_of_symb << " ";
}