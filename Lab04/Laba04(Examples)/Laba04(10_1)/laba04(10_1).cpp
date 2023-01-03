#include <iostream>
#include <iomanip> // Библиотека с различными манипуляторами для потокового ввода-вывода информации
void main()
{
	using namespace std; // Пространство имен позволяющее не писать каждый раз std
	char c, probel; probel = ' ';
	cout << "Input symbol "; 
	cin >> c;
	cout << setw(35) << setfill(probel) << probel; // setw(int n) Устанавливает ширину поля вывода в n символов
	cout << setw(10) << setfill(c) << c << endl;   // setfil() Символ заполнитель
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(12) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c;
	cout << setw(16) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(12) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

}