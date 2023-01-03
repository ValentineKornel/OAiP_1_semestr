#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	float i, y, x, k, c, d, n;
	y = 1.6 * pow(10, -4); k = 6;
	for (n = 0; n < 3; n++)
	{
		cout << "Enter i: " << endl;
		cin >> i;
		x = 1;
		while (x < 2.1)
		{
			c = i / k - sqrt(y) / 0.4;
			d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
			cout << "i = " << i << "\t";
			cout << "x = " << x << "\t";
			cout << "c = " << c << "\t";
			cout << "d = " << d << "\n";
			x = x + 0.1;
		}
	}
}