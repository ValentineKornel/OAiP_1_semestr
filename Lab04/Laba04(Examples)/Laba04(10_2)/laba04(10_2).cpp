#include <iostream>
#include <iomanip>
#include <stdio.h> // ������������ ��� ��������������� �����-������
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // ������������ ��� ������ �������� ������
	int n, k, a, b;
	printf("������� ���������� ����������\n");
	cin >> n;
	printf("������� ���������� �����\n");
	cin >> k;
	a = k / n;
	b = k % n;
	cout << "������ �������� ������� " << a << " �����(�)" <<
	 " , ��� ���� � ������� ��������� " << b << " �����(�)\n";
}