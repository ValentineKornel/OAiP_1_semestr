#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	double a = 4, b = 8, n = 200, h, x, s = 0;
	h = (b - a) / n;
	x = a;
	while (x <= (b - h)) {
		s += h * ((pow(x, 2) - 4) + (pow(x + h, 2) - 4)) / 2;
		x += h;
	}
	cout << "Площаль, найденная методом трапеций, равна " << s;
}