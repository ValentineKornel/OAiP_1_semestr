#include <iostream>
#include <iomanip>
#include <stdio.h> // ������������ ��� ��������������� �����-������
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // ������������ ��� ������ �������� ������
	int m, n, k;
	printf("������� ����� ��������\n");
	cin >> m;
	printf("������� ");
	cout << (m / 36) + 1 << endl;
	printf("���� ");
	cout << (m % 36) / 4 + 1;
}