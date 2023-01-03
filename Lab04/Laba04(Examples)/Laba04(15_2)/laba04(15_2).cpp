#include <iostream>
#include <iomanip>
#include <stdio.h> // Подключается при форматированном вводе-выводе
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // Используется для вывода русского текста
	int m, n, k;
	printf("Введите номер квартиры\n");
	cin >> m;
	printf("Подъезд ");
	cout << (m / 36) + 1 << endl;
	printf("Этаж ");
	cout << (m % 36) / 4 + 1;
}