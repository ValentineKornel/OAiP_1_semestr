#include <iomanip>
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Rusiian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Input symbol"; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
}
