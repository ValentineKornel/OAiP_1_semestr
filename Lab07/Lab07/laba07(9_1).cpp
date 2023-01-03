#include <iostream>
void main()
{
	using namespace std;
	float c, d, f, y, t;
	f = -125 * pow(10, -6); y = 1.7; t = 1;
	while (t < 2.1)
	{
		c = 2 * sin(f / 2) + log(t);
		if (c >= 3)
			d = y * exp(-2 * t) + f;
		else d = y - pow(y, 3);
	cout << "d = " << d << endl;
	t +=0.1;
	}
}