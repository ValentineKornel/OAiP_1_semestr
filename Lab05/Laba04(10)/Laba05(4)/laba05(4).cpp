#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n;
	cout << "�������� ����� ������\n";
	cin >> n;
	if (n < 3 | n == 12 && n != 0) 
		cout << "����";
	else
		if (n < 6 && n != 0)
			cout << "�����";
		else
			if (n < 9 && n != 0)
				cout << "����";
			else
				if (n < 12 && n!= 0)
					cout << "�����";
				else
					cout << "����������� ������� �������� ������. ���������� �������� �� 1 �� 12";

}