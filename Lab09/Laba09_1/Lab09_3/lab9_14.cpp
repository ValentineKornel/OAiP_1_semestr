#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	double a = 1, b = 4, n = 200, h, x, s = 0;
	h = (b - a) / n;
	x = a;
	while (x <= (b - h)) {
		s += h * ((pow(x, 4) + 4) + (pow(x + h, 4) + 4)) / 2;
		x += h;
	}
	cout << "�������, ��������� ������� ��������, ����� " << s << endl;

	double s1 = 0, s2 = 0, i;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i = 1; i < n; i++) {
		s2 += pow(x, 4) + 4;
		x += h;
		s1 += pow(x, 4) + 4;
		x += h;
	}
	s = h / 3 * ((pow(a, 4) + 4) + 4 * (pow(a + h, 4) + 4) + 4 * s1 + 2 * s2 + (pow(b, 4) + 4));
	cout << "�������, ��������� ������� �������, ����� " << s << endl;

	float e, f1, f2;
	x = 0;
	cout << "������� a  ";
	cin >> a;
	cout << "������� b ";
	cin >> b;
	e = 0.0001;
	while (abs(a - b) > 2 * e)
	{

		x = (a + b) / 2;
		f1 = pow(x, 3) + x - 2;
		f2 = pow(a, 3) + a - 2;
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}
	cout << "x = " << x << endl;
}