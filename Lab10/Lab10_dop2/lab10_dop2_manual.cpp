#include <iostream>
#include <ctime>
void main()
{

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, size, A[N], count = 0;
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> size;
	cout << "Массив А: ";
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < size - 1; i++)
	{

		if (A[i] == A[i + 1])
		{
			count += 1;
		}
	}
	cout << endl;
	cout << count;
}

