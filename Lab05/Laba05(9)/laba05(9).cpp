#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a, b;
	cin >> a >> b;
	a < b ? cout << "����� �������� ����������" : cout << "����� �������� ������������";
}