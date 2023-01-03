#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	double c1, c2, C1, C2, i;
	cout << "—колько литров в первом сосуде?";
	cin >> C1;
	cout << "—колько литров во втором сосуде?";
	cin >> C2;
	for (i = 0; i < 3; i++)
	{
		c1 = C1 / 2;
		C1 = C1 - c1;
		C2 = C2 + c1;
		c2 = C2 / 2;
		C2 = C2 - c2;
		C1 = c1 + c2;
	}
	cout << "ѕосле 12 переливаний в первом сосуде останетс€ " << C1 << " литров воды, а во втором " << C2;
}