#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	unsigned int value;
	int i;
	char str[50];
	const unsigned int mask = 1 << 31;
	_itoa_s(mask, str, 2);
	cout << str;
	cout << "¬ведите целое число";
	cin >> value;
	cout << "ƒвоичный вид: ";
	for (i = 1; i <= 32; i++)
	{
		cout << (mask & value ? '1' : '0');
		value <<= 1;
		if (i % 8 == 8)
			cout << " ";
	}
}