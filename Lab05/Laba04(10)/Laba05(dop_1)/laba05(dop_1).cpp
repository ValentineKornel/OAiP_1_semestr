#include <iostream>
void main()
{
	using namespace std;
	int a, sum, i;
	sum = 0;
	for (i = 0; i < 3; i++)
	{
		cin >> a;
		if (a % 5 == 0)
			sum += a;
	}
	if (sum == 0)
		cout << "Error";
	else
		cout << sum;

}