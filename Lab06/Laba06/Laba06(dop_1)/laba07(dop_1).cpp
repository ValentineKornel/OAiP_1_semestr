#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float p, q, count;
	count = 0;
	cout << "Enter p" << endl;
	cin >> p;
	cout << "Enter q" << endl;
	cin >> q;
	while (p < q)
	{
		p += p * 0.03;
		count += 1;
	}
	cout << "Выручка на " << count << " День будет равнятся " << p;	
}