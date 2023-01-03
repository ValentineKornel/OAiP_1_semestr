#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A;
	cout << "Введите число A ";
	cin >> A;
	if ((A & 1) == 1)
		cout << "Нет";
	else
		cout << "Да";
}