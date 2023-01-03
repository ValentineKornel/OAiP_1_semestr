#include <iostream>
void main()
{
	using namespace std;
	int a, b, c, d, num;
	num = 1000;
	while (num < 10000)
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		d = num / 1000;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
			cout << num << " ";
		num += 1;
	}
}