#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	float s, m, f, c, y, h, i;
	m = 6; f = 1.2 * pow(10, 3);
	for (i = 0; i < 3; i++)
	{
		cout << "Enter s: ";
		cin >> s;
		c = 0.2;
		while (c < 0.6)
		{
			y = (s + c) / log(f) / exp(-s);
			h = (y - m) / log(-y);
			cout << "s = " << s << "\t";
			cout << "c = " << c << "\t";
			cout << "y = " << y << "\t";
			cout << "h = " << h << "\n";
			c = c + 0.1;
		}
	}
}