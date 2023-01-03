#include <iostream>
void main()
{
	double z, y, n = 2, b = -0.12, x = 1.3 * pow(10, -4);
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-8) + 1) / 2 * z;
	std::cout << "z= " << z << "\n";
	std::cout << "y= " << y;
}