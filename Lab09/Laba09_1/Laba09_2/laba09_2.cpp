#include <iostream>
#include <math.h>
using namespace std;
void main() {
	setlocale(LC_ALL, "Rus");
	double a, b, e = 0.0001, x = 0, f1, f2;
	cout << "¬ведите a";
	cin >> a;
	cout << "¬ведите b";
	cin >> b;
	while (abs(a - b) > 2 * e) 
	{
		x = (a + b) / 2;
		f1 = (exp(x) + 2 * pow(x, 2) - 3);
		f2 = (exp(a) + 2 * pow(a, 2) - 3);
		if (f1 * f2 <= 0)
			b = x;
		else
			a = x;
	}
	cout << x;
}