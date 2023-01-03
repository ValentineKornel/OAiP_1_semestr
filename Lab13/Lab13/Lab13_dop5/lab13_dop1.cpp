#include <iostream>
#include <string>
using namespace std;

void main() {
	string str1 = "";
	string words[10];
	int am, i;
	int j = 0;

	cout << "Enter okonchanie" << endl;
	char end;
	cin >> end;

	cout << "Enter amount of words ";
	cin >> am;

	for (i = 0; i < am; i++) {
		cin >> str1;
		if (str1[(str1.size() - 1)] == end)
		{
			words[j++] = str1;
		}
	}

	for (i = 0; i < j; i++) {
		cout << words[i] << ' ';
	}
	
}