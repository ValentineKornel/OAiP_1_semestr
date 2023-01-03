#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n;
	cout << "Введдите номер месяца\n";
	cin >> n;
	if (n < 3 | n == 12 && n != 0) 
		cout << "Зима";
	else
		if (n < 6 && n != 0)
			cout << "Весна";
		else
			if (n < 9 && n != 0)
				cout << "Лето";
			else
				if (n < 12 && n!= 0)
					cout << "Осень";
				else
					cout << "Неправильно указано значение месяца. Допустимые значения от 1 до 12";

}