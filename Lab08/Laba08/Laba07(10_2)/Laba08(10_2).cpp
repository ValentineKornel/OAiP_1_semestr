#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double x, a, y, k = 0, i, j, sumx =0;
	for (j = 1; j < 4; j++)
	{
		cout << "¬ведите a:" << j << " ";
		cin >> a;
		for (i = 1; i < 6; i++)
		{
			cout << "¬ведите x:" << i << " ";
			cin >> x;
			sumx += x;
		}
		y = a + sumx;
		if (y > k)
			k = y;
		cout << endl;
	}
	cout << "k = " << k;
	
}