#include <stdio.h>
#include <iomanip>
void main()
{
	float i, s, m, f, c, y, v, k;
	s = 7.4; f = 3.2 * pow(10, 4);
	for (i = 0; i < 3; i++)
	{
		printf("Enter k: ");
		scanf_s("%f", &k);
		m = 0.3;
		while (m < 0.8)
		{
			y = s / log(5.2 * f) / (exp(-s) + 2);
			v = (1 + m * y - m * k) / log(y);
			printf(" k = %3.1f\t", k);
			printf(" m = %2.1f\t", m);
			printf("y = %5.4f\t", y);
			printf("v = %5.4f\n", v);
			m = m + 0.1;
		}
	}
}