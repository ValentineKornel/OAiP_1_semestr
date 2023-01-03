#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i, count, num, pnum, nlength;
	count = 0;
	pnum = 0;
	cout << "Введите длину числовой последовательнсти" << endl;
	cin >> nlength;
	for (i = 0; i < nlength; i++)
	{
		cin >> num;
		if (num * pnum < 0)
			count += 1;
		pnum = num;
	}
	cout << "Знак в заданной последовательности меняется " << count << " раз";
}