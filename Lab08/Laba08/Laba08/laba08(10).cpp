#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double n = 6, q = 0, x, y, i;
	for (i = 1; i < n+1; i++)
	{
		cout << "������� x" << i << endl;
		cin >> x;
		cout << "������� y" << i << endl;
		cin >> y;
		q += x * y;
	}
	cout << "q = " << q;
}
