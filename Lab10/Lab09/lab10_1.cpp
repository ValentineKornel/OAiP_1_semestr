#include <iostream>
#include <ctime>
void main()
{

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, size, A[N], k = 0, srednar, count = 0, index = 0;
	int rmn = 0, rmx = 99;
	int b, c;
	cout << "������� ������ ������� ";
	cin >> size;
	cout << "������ �:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++)
	{
		A[i] = rand() % rmx;
		cout << A[i] << endl;
	}
	srednar = (A[size - 1] + A[size - 2] + A[size - 3]) / 3;
	cout << "������� �������������� ��������� ���� ���������: " << srednar << endl;
	for (i = 0; i < size; i++)
	{
		if (A[i] == srednar)
		{
			c = i;
			b = A[i];
			count++;
		}
	}
	if (count != 0)
	{
		cout << "������ ������� �������, ������� �������� ��������������� ���� ���������: " << c << " , ������� �������: " << b << endl;
	}
	else {
		cout << "����� ��������� ������� ��� ���������, ��������������� �������";
	}
}