#include <iostream>
#include <ctime>
void main()
{

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, j, k = 0, size, A[N], B[N], count = 0, num1, num2, count2 = 0;
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> size;
	cout << "Массив А: ";
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % rmx;
		cout << A[i] << " ";
	}

	for (i = 0; i < size; i++)
	{
		num1 = A[i];
		count2 = 0;
		for (j = 0; j <= size; j++) {
			num2 = A[j];
			if (num1 == num2)
				count2 += 1;
		}
		if (count2 == 1) {
			B[k] = A[i];
			k += 1;
			count++;
		}
	}
	cout << endl;
	cout << "Числа, входящие в массив только один раз: ";
	for (i = 0; i < count; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
}