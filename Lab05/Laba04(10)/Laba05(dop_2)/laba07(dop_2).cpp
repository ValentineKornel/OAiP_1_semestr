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
	cout << "������� ����� ������������ ������";
	cin >> fch;
	cout << "������� ����� ������������ ������";
	cin >> fnum;
	if (fch == slch | slnum == fnum)
		cout << "��";
	else
		cout << "���";
}
