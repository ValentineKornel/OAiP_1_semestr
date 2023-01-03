#include <stdio.h>
#include <iomanip>
void main()
{
	float s, m, f, c, y, v, k;
	s = 7.4; m = 10; f = 3.2 * pow(10, 4); k = 0;
	while (k < 4.1)
	{
		y = s / log(5.2 * f) / (exp(-s) + 2);
		v = (1 + m * y - m * k) / log(y);
		printf("k = %2.1f\t", k);
		printf("y = %8.5f\t", y);
		printf("v = %8.5f\n", v);
		k = k + 0.5;
	}
	
}