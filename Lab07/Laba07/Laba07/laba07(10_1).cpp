#include <iostream>
void main()
{
	using namespace std;
	float a, x, n, y, z;
	a = 1.055; x = 0.6; n = 6;
	y = cos(pow(x, 2)) * cos(pow(x, 2)) / abs(x);
	while (n < 15)
	{
		if (y < a * x * n)
			z = abs(y);
		else
			z = sqrt(1 + exp(-y));
	cout << "z = " << z << endl;
	n = n + 2;
	}
}