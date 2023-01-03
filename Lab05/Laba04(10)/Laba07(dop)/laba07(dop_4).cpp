#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double p, q, a, b, c, h;
	cout << "¬ведите диагонали ромба" << endl;
	cin >> p >> q;
	a = p / 2;
	b = q / 2;
	c = sqrt(a * a + b * b);
	h = (a * b) / c;
	double r;
	cout << "¬ведите радиус шара" << endl;
	cin >> r;
	if (r > h)
		cout << "Ўар не пройдет";
	else if (r <= h)
		cout << "Ўар пройдет";
}