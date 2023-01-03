#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	int c1, c2, c3, i, kor, num, m;
	m = 0;
	for (num = 100; num < 1000 && m < 1; num++)
	{
		c3 = num % 10;
		c2 = num / 10 % 10;
		c1 = num / 100;
		kor = sqrt(num);
		if (c1 < c2 && c2 < c3 && pow(kor,2) == num) // проверяем возрастание цифр и корень
			for (i = 2; i < kor; i++) // проверяем является ли корень просты числом
			{
				if (kor % i == 0)
					break;
				else
					cout << num <<" " << kor << endl;
				m += 1;
				break;
			}
	}
}