#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "������ ����� A="; cin >> A;          //445
	cout << "������ ����� B="; cin >> B;          //665
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "����� ��� A:" << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "���������� ���� A:" << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "����� ��� B:" << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "������� ���� � B:" << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << "��������� B=" << tmp << endl;
}