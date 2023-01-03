#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
void main()
{
	char word_1[10];
	int n, i, j;
	string prov_vord;
	string dict[10];
	char str[10];
	cout << "Enter amout of words ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> dict[i];
	}
	for (i = 0; i < 1; i++) {
		prov_vord = dict[i];
		while (prov_vord[i] != '\0') {
			str[i] = prov_vord[i];
		}
	}
	for (i = 0; i < 5; i++) {
		cout << str[i];
	}
	
}