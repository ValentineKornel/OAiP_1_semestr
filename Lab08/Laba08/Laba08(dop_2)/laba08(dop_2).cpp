#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	int num, nlength, lastminusi = 0, i;
	cout << "������� ����� ������������������ �����:";
	cin >> nlength;
	cout << "������� �������� ������������������:" << endl;
	for (i = 1; i < nlength + 1; i++)
	{
		cin >> num;
		if (num < 0)
			lastminusi = i;
			
	}
	if (lastminusi != 0)
		cout << "���������� ����� ���������� �������������� �������� ����� " << lastminusi;
	else
		cout << "� �������� ������������������ ��� ������������� ���������";
}