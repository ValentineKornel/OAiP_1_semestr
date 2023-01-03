#include <iostream>
#include <time.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	int i = 0, j = 0, num_i = 0, num_j = 0;
	float el1 = 0, el2 = 0, el3 = 0, el4 = 0, el5 = 0;
	float max1 = 0, max2 = 0, max3 = 0, max4 = 0, max5 = 0;
	float Arr[5][5];
	cout << "Start Matrix: " << endl;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			Arr[i][j] = rand() % 100;
			cout << Arr[i][j] << "\t";
		}
		cout << "\n";
	}

	el1 = Arr[0][0];
	el2 = Arr[1][1];
	el3 = Arr[2][2];
	el4 = Arr[3][3];
	el5 = Arr[4][4];

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (Arr[i][j] > max1) {
				max1 = Arr[i][j];
				num_i = i;
				num_j = j;
			}
		}
	}
	Arr[0][0] = max1;
	Arr[num_i][num_j] = el1;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (Arr[i][j] > max2 and Arr[i][j] < max1){
				max2 = Arr[i][j];
				num_i = i;
				num_j = j;
			}
		}
	}
	Arr[1][1] = max2;
	Arr[num_i][num_j] = el2;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (Arr[i][j] > max3 and Arr[i][j] < max2) {
				max3 = Arr[i][j];
				num_i = i;
				num_j = j;
			}
		}
	}
	Arr[2][2] = max3;
	Arr[num_i][num_j] = el3;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (Arr[i][j] > max4 and Arr[i][j] < max3) {
				max4 = Arr[i][j];
				num_i = i;
				num_j = j;
			}
		}
	}
	Arr[3][3] = max4;
	Arr[num_i][num_j] = el4;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (Arr[i][j] > max5 and Arr[i][j] < max4) {
				max5 = Arr[i][j];
				num_i = i;
				num_j = j;
			}
		}
	}
	Arr[4][4] = max4;
	Arr[num_i][num_j] = el5;

	cout << "Edit Matrix: " << endl;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cout << Arr[i][j] << "\t";
		}
		cout << "\n";
	}
}