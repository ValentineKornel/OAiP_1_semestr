#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	int num, nlength, sum = 0, i;
	cout << "¬ведите длину последовательности чисел:";
	cin >> nlength;
	cout << "¬ведите числовую последовательность:" << endl;
	for (i = 1; i < nlength + 1; i++)
	{
		cin >> num;
		if (num % 2 == 0 && num != 0)
			sum += num;
	}
	cout << "—умма четных элементов последовательности равна " << sum;
}