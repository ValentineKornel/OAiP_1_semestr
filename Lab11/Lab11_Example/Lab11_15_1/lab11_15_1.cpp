#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A;
	cout << "������� ����� A ";
	cin >> A;
	if ((A & 1) == 1)
		cout << "���";
	else
		cout << "��";
}