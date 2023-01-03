#include <iostream>
using namespace std;
void main()
{
	int i, j, count = 1, multipl = 1;
	const int n = 3, m = 3;
	int B[n][m];
	cout << "Enter araay elements" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> B[i][j];
			if (count % 2 == 0 and B[i][j] > 0) {
				multipl *= B[i][j];
			}
			count++;
		}
	}
	cout << "MATRIX: " << endl;
	for (i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < m; j++) {
			cout << B[i][j] << "\t";
		}
	}
	cout << endl;
	cout << multipl;
}