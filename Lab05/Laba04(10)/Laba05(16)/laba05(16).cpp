#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n;
	cout << "������� ����� �� 0 �� 7\n";
	cin >> n;
	switch (n)
	{
	case 0: puts("����"); break;
	case 1: puts("����"); break;
	case 2: puts("���"); break;
	case 3: puts("���"); break;
	case 4: puts("������"); break;
	case 5: puts("����"); break;
	case 6: puts("�����"); break;
	case 7: puts("����"); break;
	default: puts("������� ������������ �����");
	}
}