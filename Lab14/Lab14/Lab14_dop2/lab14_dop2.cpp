#include <iostream>
using namespace std;

#define N 9

void main() {
	int count = 1, i, j;
	int Matrix[N][N];


	for (i = 0; i < 1; i++) {
		for (j = 0; j < N; j++) {
			Matrix[i][j] = count;
			count += 1;
		}
	}
	for (i = 1; i < N; i++) {
		Matrix[i][0] = Matrix[i - 1][N - 1];
		for (j = 1; j < N; j++) {
			Matrix[i][j] = Matrix[i - 1][j - 1];
		}
	}

	cout << "Edit Matrix: " << endl;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << Matrix[i][j] << " ";
		}
		cout << "\n";
	}
}