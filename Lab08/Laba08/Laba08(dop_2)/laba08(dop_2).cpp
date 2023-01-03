#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	int num, nlength, lastminusi = 0, i;
	cout << "Введите длину последовательности чисел:";
	cin >> nlength;
	cout << "Введите числовую последовательность:" << endl;
	for (i = 1; i < nlength + 1; i++)
	{
		cin >> num;
		if (num < 0)
			lastminusi = i;
			
	}
	if (lastminusi != 0)
		cout << "Порядковый номер последнего отрицательного элемента равен " << lastminusi;
	else
		cout << "В заданной последоваетльности нет отрицательных элементов";
}