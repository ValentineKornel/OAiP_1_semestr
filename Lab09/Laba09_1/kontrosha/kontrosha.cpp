#include <iostream>
void main()
{
	using namespace std;
	float s = 0;
	float x = 2;
	int i = 0, j = 0;
	int n = 4;
	float znam;
	for (i; i < 5; i++)
	{
		znam = 2;
		for (j; j < n; j++) {
			s += (1 / znam++) * x;
		}
		x += 2;
	}
	cout << s;
}