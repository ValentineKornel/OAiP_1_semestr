#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double p, q, a, b, c, h;
	cout << "������� ��������� �����" << endl;
	cin >> p >> q;
	a = p / 2;
	b = q / 2;
	c = sqrt(a * a + b * b);
	h = (a * b) / c;
	double r;
	cout << "������� ������ ����" << endl;
	cin >> r;
	if (r > h)
		cout << "��� �� �������";
	else if (r <= h)
		cout << "��� �������";
}