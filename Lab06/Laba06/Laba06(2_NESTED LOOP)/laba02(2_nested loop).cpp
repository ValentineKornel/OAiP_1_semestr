#include <stdio.h>
#include <iomanip>
void main()
{
	float a, b, n, i, y, z, k;
	a = 2 * pow(10, -3); b = 8.5; n = 2;
	for (k = 0; k < 4; k++)
	{
		printf("Enter n: ");
		scanf_s("%f", &n);
		i = 2;
		while (i < 3.1)
		{
			y = sqrt(i * b - pow(b, 2) * a);
			z = y * tan(n / 4) - exp(1 + b);
			printf(" n = %2.1f\t", n);
			printf(" i = %2.1f\t", i);
			printf("y = %5.3f\t", y);
			printf("z = %5.3f\n", z);
			i = i + 0.5;
		}
	}
} 