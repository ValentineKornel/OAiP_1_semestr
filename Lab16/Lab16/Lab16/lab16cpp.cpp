#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

int GiveVariant10Task1(int** Arr, int k, int row, int col);
void GiveVariant11Task2(char str[], char c);
void GiveVariant2Task1(float** Arr, int row, int col);
void GiveVariant2Task2(char str[]);
int GiveVariant7Task1(int** Arr, int k, int row, int col);
void GiveVariant8Task1(int** Arr, int row, int col);
void GiveVariant11Task1(int** Arr, int row, int col);

void main() {
	int choise = 5;
	do {
		cout << "\n\nChoose task number " << endl;
		cout << "1 = variant 10 task 1" << endl;
		cout << "2 = variant 11 task 2" << endl;
		cout << "3 = variant 2 task 1" << endl;
		cout << "4 = variant 2 task 2" << endl;
		cout << "5 = variant 7 task 1" << endl;
		cout << "6 = variant 8 task 1" << endl;
		cout << "7 = variant 11 task 1" << endl; 
		cout << "8 - exit" << endl;
		cin >> choise;
		switch (choise) {

		case 1: {
			int N, M, k, i, j;
			int** Array;
			cout << "Enter amount of rows: ";
			cin >> N;
			cout << "Enter amount of columns: ";
			cin >> M;
			cout << "Enter k: ";
			cin >> k;
			Array = new int*[N];
			for (i = 0; i < N; i++) {
				Array[i] = new int[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			cout << "Matrix: " << endl;
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			cout << "Column number: " << GiveVariant10Task1(Array, k, N, M) << endl;
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		case 2: {
			char str[20];
			char c;
			cout << "Enter the string" << endl;
			cin >> str;
			cout << "Enter c";
			cin >> c;
			GiveVariant11Task2(str, c);
			break;
		}

		case 3: {
			int N, M, i, j;
			float** Array;
			cout << "Enter amount of rows: ";
			cin >> N;
			cout << "Enter amount of columns: ";
			cin >> M;
			Array = new float* [N];
			for (i = 0; i < N; i++) {
				Array[i] = new float[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			cout << "Matrix: ";
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			GiveVariant2Task1(Array, N, M);
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		case 4: {
			char str[20];
			cout << "Enter the string" << endl;
			cin >> str;                               //À = -128 ; ÿ = -17;
			GiveVariant2Task2(str);
			break;

		}

		case 5: {
			int N, M, d, i, j;
			int** Array;
			cout << "Enter amount of rows: ";
			cin >> N;
			cout << "Enter amount of columns: ";
			cin >> M;
			cout << "Enter d: ";
			cin >> d;
			Array = new int* [N];
			for (i = 0; i < N; i++) {
				Array[i] = new int[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			cout << "Matrix: " << endl;
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			cout << "Row number: " << GiveVariant7Task1(Array, d, N, M) << endl;
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
			
		}
		case 6: {
			{
				int N, M, number, i, j;
				int** Array;
				cout << "Enter amount of rows: ";
				cin >> N;
				cout << "Enter amount of columns: ";
				cin >> M;
				Array = new int* [N];
				for (i = 0; i < N; i++) {
					Array[i] = new int[M];
				}
				for (i = 0; i < N; i++) {
					for (j = 0; j < M; j++) {
						cin >> *(*(Array + i) + j);
					}
				}
				cout << "Matrix: " << endl;
				for (i = 0; i < N; i++) {
					cout << endl;
					for (j = 0; j < M; j++) {
						cout << *(*(Array + i) + j) << "  ";
					}
				}
				cout << endl;
				GiveVariant8Task1(Array, N, M);
				for (i = 0; i < N; i++) {
					delete Array[i];
				}
				delete[] Array;
				break;

			}
		case 7: {
			int N, M, i, j;
			int** Array;
			cout << "Enter amount of rows: ";
			cin >> N;
			cout << "Enter amount of columns: ";
			cin >> M;
			Array = new int* [N];
			for (i = 0; i < N; i++) {
				Array[i] = new int[M];
			}
			for (i = 0; i < N; i++) {
				for (j = 0; j < M; j++) {
					cin >> *(*(Array + i) + j);
				}
			}
			cout << "Matrix: " << endl;
			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					cout << *(*(Array + i) + j) << "  ";
				}
			}
			cout << endl;
			GiveVariant11Task1(Array, N, M);
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		}
		case 8: {break;}
		}
	} while (choise != 7);
}

int GiveVariant10Task1(int** Arr, int k, int row, int col) {
	int i, j;
	int col_num = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == k) {
				col_num = j;
			}
		}
	}
	return col_num;
}

void GiveVariant11Task2(char str[], char c) {
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		cout << *(str + i);
		if (*(str + i) == c) {
			cout << "*";
		}
	}
}

void GiveVariant2Task1(float** Arr, int row, int col) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == 0)
				break;
			*(*(Arr + i) + j) += 1;
		}
	}
	cout << "Edited Matrix:";
	for (i = 0; i < row; i++) {
		cout << endl;
		for (j = 0; j < col; j++) {
			cout << *(*(Arr + i) + j) << " ";
		}
	}
}

void GiveVariant2Task2(char str[]) {
	int i;
	int length = strlen(str);
	for (i = 0; i < length; i++) {
		if (*(str + i) > -129 and *(str + i) < -18) {            //À = -128 ; ÿ = -17;
			cout << *(str + i);
		}
		else {
			cout << "?";
		}
	}
}

int GiveVariant7Task1(int** Arr, int k, int row, int col) {
	int i, j;
	int row_num = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == k) {
				row_num = i;
			}
		}
	}
	return row_num;
}

void GiveVariant8Task1(int** Arr, int row, int col) {
	int i, j;
	int amount_of_zero_more_elements = 0;
	int amount_of_zero_less_elements = 0;
	int amount_of_zero_elements = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) > 0) {
				amount_of_zero_more_elements += 1;
			}
			if (*(*(Arr + i) + j) < 0) {
				amount_of_zero_less_elements += 1;
			}
			else {
				amount_of_zero_elements += 1;
			}
		}
	}
	cout << "Amount of elements that more than zero: " 
		<< amount_of_zero_more_elements << endl;
	cout << "Amount of elements that less than zero: "
		<< amount_of_zero_less_elements << endl;
	cout << "Amount of zero elements: " << amount_of_zero_elements;
}

void GiveVariant11Task1(int** Arr, int row, int col) {
	int i, j;
	int max_el_row = 0;
	int max_el_col = 0;
	int max_el = -999;
	int sum = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) > max_el) {
				max_el = *(*(Arr + i) + j);
				max_el_row = i;
				max_el_col = j;
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == max_el) {
				cout << "Max element: " << *(*(Arr + i) + j) << endl;
				cout << "Position of max element: " << "[" << i << "]" << "[" << j << "]" << endl;
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (j < i) {
				sum += *(*(Arr + i) + j);
			}
		}
	}
	cout << "Summ of element below the main diagonal: " << sum;

}