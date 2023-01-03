#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	double a = 4, b = 8, n = 200, s1 = 0, s2 = 0, h, x, i, s;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i = 1; i < n; i++) {
		s2 += pow(x, 2) - 4;
		x += h;
		s1 += pow(x, 2) - 4;
		x += h;
	}
	s = h / 3 * ((pow(a, 2) - 4) + 4 * (pow(a + h, 2) - 4) + 4 * s1 + 2 * s2 + (pow(b, 2) - 4));
	cout << "Площадь, найденная методом порабол, равна " << s;
}