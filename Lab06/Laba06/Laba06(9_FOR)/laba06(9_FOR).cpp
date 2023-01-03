#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	float i, s, m, f, c, y, h;
	s = 5.9; m = 6; f = 1.2 * pow(10, 3);
	for (i = 0; i < 3; i++)
	{
		cout << "Enter c: " << endl;
		cin >> c;
		y = (s + c) / log(f) / exp(-s);
		h = (y - m) / log(y);
		cout << "y = " << y << endl;
		cout << "h = " << h << endl;
	}
}