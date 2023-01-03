#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	float i, y, x, k, c, d;
	y = 1.6 * pow(10, -4); x = -1; k = 6; i = 0;
	while (i < 3.1)
	{
		c = i / k - sqrt(y) / 0.4;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << "i = " << i << "\t";
		cout << "c = " << c << "\t";
		cout << "d = " << d << endl;
		i = i + 0.5;
	}
}