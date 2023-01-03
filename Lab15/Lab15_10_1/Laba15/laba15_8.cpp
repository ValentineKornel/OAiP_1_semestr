#include "laba15_8.h"

int variant8(void)
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
		case 1: task81(); break;
		case 2: task82(); break;
		case 3: break;
		}
	} while (c != 3);
	return 0;
}

void task81() {
	int n, i;
	int count = 0;
	int sum = 0;
	int zero_el;
	cout << "Enter size of Array ";
	cin >> n;
	int* pArr = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		cin >> pArr[i];
		if (pArr[i] > 0) {
			count += 1;
		}
		if (pArr[i] == 0) {
			zero_el = i;
		}
	}
	for (i = zero_el; i < n; i++) {
		sum += pArr[i];
	}
	cout << endl;
	cout << "Emount of plus element: " << count;
	cout << endl;
	cout << "summ: " << sum << endl;

	free(pArr);

}
void task82() {
	int size, i, j, ** A, col_num;
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
			if (A[i][j] == 0) {
				col_num = j;
				break;
			}
		}
	}
	cout << "\n\n Number of colums with '0' element: " << col_num;

	for (i = 0; i < size; i++) {
		delete[] A[i];
	}
	delete[] A;
}