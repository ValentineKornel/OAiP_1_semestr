#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i, count, num, pnum;
	count = 0;
	pnum = 0;
	cout << "������� �������� ������������������, ������� ������������� �����" << endl;
	do
	{
		cin >> num;
		if (num == 0)
			break;
		if (num * pnum < 0)
			count += 1;
		pnum = num;
	} while (num != 0);
	cout << "���� � �������� ������������������ �������� " << count << " ���";
}