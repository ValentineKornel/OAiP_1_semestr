#include <iostream>
#include <iomanip>
#include <stdio.h> // ������������ ��� ��������������� �����-������
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // ������������ ��� ������ �������� ������
	int n, m, t;
	double k;
	printf("������� ���������� ����������\n");
	cin >> n;
	printf("������� ����� �������� ������ �������?\n");
	cin >> m;

	m = m * 60;
	t = (2 * m + 10 * (n - 1)) / 2 * n;

	cout << "��� ������� �������� " << t / 60 << " ����� " << t % 60 << " �����";
}

