#include <iostream>
void main()
{
	double t, u, k = 4, x = pow(10, -4), a = 8.1;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << "t= " << t << "\n";
	std::cout << "u= " << u;
}