#include <stdio.h>
#include <iomanip>
void main()
{
	float i, s, m, f, c, y, v, k;
	s = 7.4; m = 10; f = 3.2 * pow(10, 4);
	for (i = 0; i < 3; i++)
	{
		printf("Enter k: ");
		scanf_s("%f", &k);
		y = s / log(5.2 * f) / (exp(-s) + 2);
		v = (1 + m * y - m * k) / log(y);
		printf("y = %7.4f\t", y);
		printf("v = %7.4f\n", v);
	}
}