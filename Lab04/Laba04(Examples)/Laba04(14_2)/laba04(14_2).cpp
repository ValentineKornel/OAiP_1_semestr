#include <iostream>
#include <iomanip>
#include <stdio.h> // ������������ ��� ��������������� �����-������
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // ������������ ��� ������ �������� ������
	int a, b, c, m, n, k; m = 50; n = 100; k = 200;
	printf("���������� ������ ���������\n");
	cin >> a;
	printf("���������� ������ �����\n");
	cin >> b;
	printf("���������� ������ ���������\n");
	cin >> c;
	printf("����� ���������� ������������ ����� = ");
	cout << m * a + n * b + k * c;
}