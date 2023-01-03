#include <stdio.h>
#include <iomanip>
void main()
{
	float a, b, n, i, k, y, z;
	a = 2 * pow(10, -3); b = 8.5; n = 2;
	for (k = 0; k < 3; k++)
	{
		printf("Enter i:");
		scanf_s("%f", &i);
		y = sqrt(i * b - pow(b, 2) * a);
		z = y * tan(n / 4) - exp(1 + b);
		printf("y = %5.3f\t", y);
		printf("z = %5.3f\n", z);
	}
}