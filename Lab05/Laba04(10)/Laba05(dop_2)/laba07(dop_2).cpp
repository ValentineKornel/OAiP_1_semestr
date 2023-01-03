#include <iostream>
#include <stdio.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int slnum, fnum;
	char slch, fch;
	slch = 104;
	slnum = 1;
	cout << "Введите букву расположение фигуры";
	cin >> fch;
	cout << "Введите цифру расположения фигуры";
	cin >> fnum;
	if (fch == slch | slnum == fnum)
		cout << "Да";
	else
		cout << "Нет";
}
