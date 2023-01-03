#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	int num, sum;
	num = 0;
	sum = 0;
	while (num < 150)
	{
		if (num % 10 == 5 || num % 10 == 0)
			sum = sum + num;
	num = num + 1;
	}
	cout << sum;
}