/* Example 1 */
#include <iostream>
void main()
{
	double t, u, k = 4, a = 4.1, x = 5 * pow(10, -5);
	t = 2 * tan(k) / a + log(3 + x) + exp(x);
	u = sqrt(t + 1) - sin(x) * cos(t);
	std::cout << "t=" << t <<"\n";
	std::cout << "u=" << u;

}