#include <iostream>
#include <iomanip>
#include <stdio.h> // Подключается при форматированном вводе-выводе
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // Используется для вывода русского текста
	int a, b, c, m, n, k; m = 50; n = 100; k = 200;
	printf("Количество сбитых самолетов\n");
	cin >> a;
	printf("Количество сбитых ракет\n");
	cin >> b;
	printf("Количество сбитых спутников\n");
	cin >> c;
	printf("Общее количество заработанных очков = ");
	cout << m * a + n * b + k * c;
}