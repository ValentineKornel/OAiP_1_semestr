#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	int count = 0, cop50, cop20, cop5, cop2, rub = 100;
	for (cop50 = 0; cop50 <= 2; cop50++) {
		for (cop20 = 0; cop20 <= 5; cop20++) {
			for (cop5 = 0; cop5 <= 20; cop5++) {
				for (cop2 = 0; cop2 <= 50; cop2++) {
					if (rub == (cop50 * 50 + cop20 * 20 + cop5 * 5 + cop2 * 2))
						count++;
				}
			}
		}
	}
	cout << "Количество способов равно " << count;
}