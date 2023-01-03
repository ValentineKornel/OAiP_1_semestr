#include "laba15_6.h"

int variant6(void)
{
	int c;
	do
	{
		cout << endl;
		cout << "\nEnter" << endl;
		cout << "1-task 1" << endl;
		cout << "2-task 2" << endl;
		cout << "3-exit" << endl;
		cin >> c;
		switch (c)
		{
		case 1: task61(); break;
		case 2: task62(); break;
		case 3: break;
		}
	} while (c != 3);
	return 0;
}

void task61() {
	int n, i;
	float sum = 0;
	float min = 101.0;
	float first_plus_element;
	float last_plus_element;
	cout << "Enter size of Array ";
	cin >> n;
	float* pArr = (float*)malloc(n * sizeof(float));
	srand((unsigned int)time(NULL));
	for (i = 0; i < n; i++) {
		pArr[i] = (float)(rand() % 20001) / 100 - 100;
		if (pArr[i] < min) {
			min = pArr[i];
		}
		if (pArr[i] > 0) {
			last_plus_element = i;
		}
		cout << pArr[i] << ' ';
	}

	for (i = 0; i < n; i++) {
		if (pArr[i] > 0) {
			first_plus_element = i;
			break;
		}
	}
	for (i = first_plus_element; i < last_plus_element + 1; i++) {
		sum += pArr[i];
	}

	cout << endl;
	cout << "Minimal elemnt: " << min << endl;
	cout << "Summ: " << sum << endl;

	free(pArr);

}
void task62() {
	int size, i, j, ** A, str_num;
	cout << "Enter size";
	cin >> size;
	A = new int* [size * size];
	for (i = 0; i < size; i++) {
		A[i] = new int[size];
		for (j = 0; j < size; j++) {
			cin >> A[i][j];
		}
	}
	for (i = 0; i < size; i++) {
		cout << endl;
		for (j = 0; j < size; j++) {
			cout << A[i][j] << "  ";
		}
	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (A[i][j] < 0) {
				str_num = i;
				break;
			}
		}
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (j == str_num) {
				A[i][j] /= 2;
			}
		}
	}

	cout << "\n\n Number of string with minus element: " << str_num << endl;

	cout << "Edited Matrix: " << endl;
	for (i = 0; i < size; i++) {
		cout << endl;
		for (j = 0; j < size; j++) {
			cout << A[i][j] << "  ";
		}
	}

	for (i = 0; i < size; i++) {
		delete[] A[i];
	}
	delete[] A;
}