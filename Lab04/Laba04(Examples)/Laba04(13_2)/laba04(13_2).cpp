#include <iostream>
#include <iomanip>
#include <stdio.h> // Подключается при форматированном вводе-выводе
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // Используется для вывода русского текста
	int n, m, t;
	double k;
	printf("Введите количество работников\n");
	cin >> n;
	printf("Сколько часов работала первая косилка?\n");
	cin >> m;

	m = m * 60;
	t = (2 * m + 10 * (n - 1)) / 2 * n;

	cout << "Вся бригада работала " << t / 60 << " часов " << t % 60 << " минут";
}

