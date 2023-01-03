#include <iostream>
using namespace std;
void main()
{
	int i, j, multipl = 1;
	int str_num;
	const int n = 3, m = 3;
	int B[n][m];
	cout << "Enter araay elements" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> *(*(B + i) + j);
			if (*(*(B + i) + j) == 0) {
				str_num = i;
			}
		}
	}
	cout << "MATRIX: " << endl;
	for (i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << *(*(B + i) + j) << "\t";
		}
	}
	cout << endl;
	cout << "Number of sring with 0 element: " << str_num;
	cout << endl;
	cout << " EDITED MATRIX: " << endl;
	for (i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << (* (*(B + i) + j)) - (*(B + str_num)[0]) << "\t";
		}
	}
}