#include <iostream>;
#include <iomanip>;
void main()
{
	using namespace std;
	float i, y, x, c, d, n, k;
	y = 1.6 * pow(10, -4); x = -1; k = 6;
	for (n = 0; n < 3; n++)
	{
		cout << "Enter i: ";
		cin >> i;
		c = i / k - sqrt(y) / 0.4;
		d = exp(1 - c) + 4.9 * (pow(x, 2) + 1);
		cout << "c = " << c << "\t";
		cout << "d = " << d << endl;
	}
}