#include <iostream>
#include <iomanip>
void main()
{
	using namespace  std;
	float s, m, f, c, y, h;
	s = 5.9; m = 6; f = 1.2 * pow(10, 3);
	c = 0;
	while (c < 1.0)
	{
		y = (s + c) / log(f) / exp(-s);
		h = (y - m) / log(y);
		cout << "c = " << c << endl;
		cout << "y = " << y << endl;
		cout << "h = " << h << endl << endl;
		c = c + 0.1;
	}
}

