#include <iostream>
#include <ctime>
void main()
{

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, j, k = 0, size, M[N], B[N], count = 0, num1, num2, count2 = 0;
	int rmn = 0, rmx = 99;
	cout << "������� ������ ������� ";
	cin >> size;
	cout << "������ M: ";
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		M[i] = rand() % rmx;
		cout << M[i] << " ";
	}

	for (i = 0; i < size; i++)
	{
		num1 = M[i];
		count2 = 0;
		for (j = 0; j <= size; j++) {
			num2 = M[j];
			if (num1 == num2)
				count2 += 1;
		}
		if (count2 == 1) {
			B[k] = M[i];
			k += 1;
			count++;
		}
	}
	cout << endl;
	cout << "�����, �������� � ������ ������ ���� ���: ";
	for (i = 0; i < count; i++)
	{
		cout << B[i] << " ";
	}
	cout << endl;
	cout << "���������� ��������� ��������� ������� ����� " << count << endl;
}