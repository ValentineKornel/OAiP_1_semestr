#include <iostream>
#include <iomanip>
#include <stdio.h> // ѕодключаетс€ при форматированном вводе-выводе
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian"); // »спользуетс€ дл€ вывода русского текста
	int n, k, a, b;
	printf("¬ведите количество школьников\n");
	cin >> n;
	printf("¬ведите количество €блок\n");
	cin >> k;
	a = k / n;
	b = k % n;
	cout << " аждый школьник получит " << a << " €блок(о)" <<
	 " , при этом в корзине останетс€ " << b << " €блок(о)\n";
}