#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, a, b, c;
	cin >> n;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100;
	if ((a + b + c) % 3 == 0 && n !=0)
		cout << "����� " << n << " ������ �������� �� 3";
	else
		cout << "����� " << n << " �� �������� �� 3 ��� �������";
}