#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, n, p;
	int A;
	char rezult[30];

	cout << "¬ведите число A ";
	cin >> A;
	cout << "¬ведите число n ";
	cin >> n;
	cout << "¬ведите чило p ";
	cin >> p;
	p -= 1;
	_itoa_s(A, rezult, 2);
	cout << "„исло A  в двоичном представлении: " << rezult << endl;

	for (i = 0; i < n; i++)
	{
		A = A | (1 << --p);
	}
	_itoa_s(A, rezult, 2);
	cout << rezult << endl;
}