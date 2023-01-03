#include <stdio.h>
#include <iomanip>
void main()
{
	float a, b, n, i, y, z;
	a = 2 * pow(10, -3); b = 8.5; n = 2; i = 1;
	while (i < 3.1)
	{
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);
		printf("i = %2.1f\", i);
		printf("y = %5.4f\t", y);
		printf("z = %5.4f\n", z);
		i = i + 0.5;
	}
}