#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A;
	char rezult[30];
	cout << "������� ����� A ";
	cin >> A;
	_itoa_s(A, rezult, 2);
	cout << "����� A  � �������� ������������� " << rezult << endl;

	A = A | (1 << 3);
	A = A | (1 << 4);
	_itoa_s(A, rezult, 2);
	cout << rezult;

}