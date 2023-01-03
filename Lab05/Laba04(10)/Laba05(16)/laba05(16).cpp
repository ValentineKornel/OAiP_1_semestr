#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n;
	cout << "Введите число от 0 до 7\n";
	cin >> n;
	switch (n)
	{
	case 0: puts("Ноль"); break;
	case 1: puts("Один"); break;
	case 2: puts("Два"); break;
	case 3: puts("Три"); break;
	case 4: puts("Четыре"); break;
	case 5: puts("Пять"); break;
	case 6: puts("Шесть"); break;
	case 7: puts("Семь"); break;
	default: puts("Указано недопустимое число");
	}
}