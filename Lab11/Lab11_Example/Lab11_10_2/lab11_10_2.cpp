#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p;
	int A;
	char rezult[30];

	cout << "������� ����� A ";
	cin >> A;
	cout << "������� ����� n ";
	cin >> n;
	cout << "������� ���� p ";
	cin >> p;
	_itoa_s(A, rezult, 2);
	cout << "����� A  � �������� �������������: " << rezult << endl;

	for (i = 0; i < n; i++)
	{
		A = A ^ (1 << p++);
	}
	_itoa_s(A, rezult, 2);
	cout << rezult << endl;
}