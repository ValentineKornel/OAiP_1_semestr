#include "laba15_9.h"

int variant9(void)
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
		case 1: task91(); break;
		case 2: task92(); break;
		case 3: break;
		}
	} while (c != 3);
	return 0;
}

void task91() {
	int n, i;
	float sum = 0;
	float abs_max = -101.0, abs_min = 101.0;
	float multipl = 1.0;
	cout << "Enter size of Array ";
	cin >> n;
	float* pArr = (float*)malloc(n * sizeof(float));
	srand((unsigned int)time(NULL));
	for (i = 0; i < n; i++) {
		pArr[i] = (float)(rand() % 20001) / 100 - 100;
		if (pArr[i] > 0) {
			multipl *= pArr[i];
		}
		if (pArr[i] < abs_min) {
			abs_min = i;
		}
		cout << pArr[i] << ' ';
	}
	for (i = 0; i < abs_min + 1; i++) {
		sum += pArr[i];
	}
	cout << endl;
	cout << "multiple:" << multipl;
	cout << "summ: " << sum << endl;

	free(pArr);

}
void task92() {
	int size, i, j, ** A, str_num = 0, el, sum = 0;
	bool flag = false;
	cout << "Enter size";
	cin >> size;
	A = new int* [size * size];
	for (i = 0; i < size; i++) {
		A[i] = new int[size];
		flag = false;
		for (j = 0; j < size; j++) {
			cin >> A[i][j];
			if (A[i][j] < 0) {
				flag = true;
			}
		}
		if (flag == false) {
			str_num = i;
			for (j = 0; j < size; j++) {
				sum += A[i][j];
			}
		}

	}
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			A[i][j] += sum;
		}
	}
	cout << "\n\n String number: " << str_num;
	cout << "\n Summ: " << sum;
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