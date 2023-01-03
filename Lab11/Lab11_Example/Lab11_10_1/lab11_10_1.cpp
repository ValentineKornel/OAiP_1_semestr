#include <iostream>
#include <bitset>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, n, i;
	int maskA = 1;
	char rezult[30];

	cout << "¬ведите число A ";
	cin >> A;                          //3304 = 1100 1110 1000
	cout << "¬ведите n ";
	cin >> n;

	for (i = 1; i < n; i++)
	{
		maskA = (maskA * 2) + 1;
	}
	_itoa_s((A>>1 & maskA), rezult, 2);
	cout << rezult;
}