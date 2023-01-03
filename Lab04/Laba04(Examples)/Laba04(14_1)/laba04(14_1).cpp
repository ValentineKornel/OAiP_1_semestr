#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Input synbol";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << c << endl;


}