#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;

void GiveVariant10Task1(int* Arr, int size);
void GiveVariant10Task2(int** Arr, int row, int col);
int *GiveVariant3Task1(int* Arr, int size, int* sum);
int* GiveVariant3Task2(int** Arr, int row, int col, int* sum);
int GiveVariant6Task1(int* Arr, int size);
bool GiveVariant6Task2(int** Arr, int row, int col);
int GiveVariant14Task1(int* Arr, int size);
void GiveVariant14Task2(int** Arr, int row, int col);

void main() {
	int choise = 5;
	do {
		cout << "\n\nChoose task number " << endl;
		cout << "1 = variant 10 task 1" << endl;
		cout << "2 = variant 10 task 2" << endl;
		cout << "3 = variant 3 task 1" << endl;   // ***
		cout << "4 = variant 3 task 2" << endl;
		cout << "5 = variant 6 task 1" << endl;
		cout << "6 = variant 6 task 2" << endl;
		cout << "7 = variant 14 task 1" << endl;
		cout << "8 = variant 14 task 2" << endl;
		cout << "9 - exit" << endl;
		cin >> choise;
		switch (choise) {

		case 1: {
			int* Array;
			int array_size, i;
			cout << "Enter array size: ";
			cin >> array_size;
			Array = new int[array_size];
			for (i = 0; i < array_size; i++) {
				cin >> *(Array + i);
			}
			cout << endl << "Array: " << endl;
			for (i = 0; i < array_size; i++) {
				cout << *(Array + i) << " ";
			}
			GiveVariant10Task1(Array, array_size);
			delete[] Array;
		}

		case 2: {
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
			GiveVariant10Task2(Array, N, M);
			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}
		case 3: {
			int* Array;
			int psum = 0;
			int array_size, i;
			cout << "Enter array size: ";
			cin >> array_size;
			Array = new int[array_size];
			for (i = 0; i < array_size; i++) {
				cin >> *(Array + i);
			}
			cout << endl << "Array: " << endl;
			for (i = 0; i < array_size; i++) {
				cout << *(Array + i) << " ";
			}
			cout << "Summ: " << *GiveVariant3Task1(Array, array_size, &psum);
			delete[] Array;
			break;
		}
		case 4:{
			int N, M, i, j;
			int psum = 0;
			int* sum;
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
			sum = GiveVariant3Task2(Array, N, M, &psum);
			cout << "Summ = " << *sum << endl;
			cout << "\nEdited Matrix:" << endl;

			for (i = 0; i < N; i++) {
				cout << endl;
				for (j = 0; j < M; j++) {
					*(*(Array + i) + j) -= *sum;
					cout << *(*(Array + i) + j) << " ";
				}
			}

			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		case 5: {
			int* Array;
			int array_size, i;
			cout << "Enter array size: ";
			cin >> array_size;
			Array = new int[array_size];
			for (i = 0; i < array_size; i++) {
				cin >> *(Array + i);
			}
			cout << endl << "Array: " << endl;
			for (i = 0; i < array_size; i++) {
				cout << *(Array + i) << " ";
			}
			cout << "\nSumm = " << GiveVariant6Task1(Array, array_size);
			delete[] Array;
			break;
		}

		case 6: {
			int N, M, i, j;
			bool is_contain;
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

			is_contain = GiveVariant6Task2(Array, N, M);
			
			if (is_contain == false) {
				cout << "\nEdited Matrix:" << endl;
				for (i = 0; i < N; i++) {
					cout << endl;
					for (j = 0; j < M; j++) {
						if (*(*(Array + i) + j) < 0) {
							*(*(Array + i) + j) = 0;
						}
						cout << *(*(Array + i) + j) << " ";
					}
				}
			}
			else {
				for (i = 0; i < N; i++) {
					cout << endl;
					for (j = 0; j < M; j++) {
						cout << *(*(Array + i) + j) << " ";
					}
				}
			}


			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}

		case 7: {
			int* Array;
			int array_size, i;
			cout << "Enter array size: ";
			cin >> array_size;
			Array = new int[array_size];
			for (i = 0; i < array_size; i++) {
				cin >> *(Array + i);
			}
			cout << endl << "Array: " << endl;
			for (i = 0; i < array_size; i++) {
				cout << *(Array + i) << " ";
			}
			cout << "\nSubstraction = " << GiveVariant14Task1(Array, array_size);
			delete[] Array;
			break;
		}

		case 8: {
			int N, M, i, j;
			bool is_contain;
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

			GiveVariant14Task2(Array, N, M);

			for (i = 0; i < N; i++) {
				delete Array[i];
			}
			delete[] Array;
			break;
		}
		}

	} while (choise != 9);
}

void GiveVariant10Task1(int* Arr, int size) {
	int i;
	cout << "\nInexes of even elements at odd indexes: " << endl;
	for (i = 0; i < size; i++) {
		if ((i % 2) != 0 and *(Arr + i) % 2 == 0) {
			cout << *(Arr + i) << " ";
		}
	}
}

void GiveVariant10Task2(int** Arr, int row, int col) {
	int i, j;
	int max_element = -999;
	int el_row, el_col;
	int count = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) > max_element) {
				max_element = *(*(Arr + i) + j);
				el_row = i;
				el_col = j;
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == max_element) {
				count += 1;
			}
		}
	}
	if (count > 1) {
		cout << "Max elemtnt: " << max_element << " ,Indexed of max element: "
			<< "[" << el_row << "] " << "[" << el_col << "]";
	}
	else {
		cout << "Max elemtn occurs no more than 1 time";
	}
}

int* GiveVariant3Task1(int* Arr, int size, int* sum) {
	int i;
	int* psum = sum;
	int first_nul, last_nul;
	for (i = 0; i < size; i++) {
		if (*(Arr + i) == 0) {
			first_nul = i;
			break;
		}
	}
	for (i = 0; i < size; i++) {
		if (*(Arr + i) == 0) {
			last_nul = i;
		}
	}
	for (i = first_nul; i < last_nul; i++) {
		*psum += *(Arr + i);
	}
	return psum;
}

int *GiveVariant3Task2(int** Arr, int row, int col, int* sum) {
	int i, j;
	int* psum = sum;
	bool if_str_pl;
	int plus_row = -1;
	int count = 0;
	for (i = 0; i < row; i++) {
		if_str_pl = true;
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) < 0) {
				if_str_pl = false;
			}
			if (if_str_pl == true) {
				plus_row = i;
			}
		}
	}
	if (plus_row > -1) {
		for (j = 0; j < col; j++) {
			*psum += *(*(Arr + plus_row) + j);
		}
	}
	return psum;
}

int GiveVariant6Task1(int* Arr, int size) {
	int i;
	int min_el = 999;
	int max_el = -999;
	for (i = 0; i < size; i++) {
		if (*(Arr + i) > max_el) {
			max_el = *(Arr + i);
		}
		if (*(Arr + i) < min_el) {
			min_el = *(Arr + i);
		}
	}
	return min_el + max_el;
}

bool GiveVariant6Task2(int** Arr, int row, int col) {
	int i, j;
	int count = 0;
	bool if_theris_zero;
	for (i = 0; i < row; i++) {
		if_theris_zero = false;
		for (j = 0; j < col; j++) {
			if (*(*(Arr + i) + j) == 0) {
				if_theris_zero = true;
			}
			if (if_theris_zero == true) {
				count += 1;
			}
		}
	}
	if (count == row) {
		return true;
	}
	else {
		return false;
	}
}

int GiveVariant14Task1(int* Arr, int size) {
	int i;
	int min_el = 999;
	int max_el = -999;
	for (i = 0; i < size; i++) {
		if (*(Arr + i) > max_el) {
			max_el = *(Arr + i);
		}
		if (*(Arr + i) < min_el) {
			min_el = *(Arr + i);
		}
	}
	return max_el - min_el;
}

void GiveVariant14Task2(int** Arr, int row, int col) {
	int i, j;
	int number_of_plus_column = -1;
	bool if_theris_plus_colum;
	for (j = 0; j < col; j++) {
		if_theris_plus_colum = true;
		for (i= 0; i < row; i++) {
			if (*(*(Arr + i) + j) < 0) {
				if_theris_plus_colum = false;
			}
		}
		if (if_theris_plus_colum == true) {
			number_of_plus_column = j;
			break;
		}
	}
	if (number_of_plus_column > -1) {
		for (i = 0; i < row; i++) {
			cout << endl;
			for (j = 0; j < col; j++) {
				if (j == number_of_plus_column - 1) {
					cout << (* (*(Arr + i) + j)) * (-1) << " ";
				}
				else {
					cout << *(*(Arr + i) + j) << " ";
				}
			}
		}
	}
	else {
		for (i = 0; i < row; i++) {
			cout << endl;
			for (j = 0; j < col; j++) {
				cout << *(*(Arr + i) + j) << " ";
			}
		}
	}
}