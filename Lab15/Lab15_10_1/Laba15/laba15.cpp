#include <iostream>
#include "laba15_6.h"
#include "laba15_8.h"
#include "laba15_9.h"
#include "laba15_10.h"

using namespace std;


int main(void)
{
	int c;
	do
	{
		cout << endl;
		cout << "\nEnter" << endl;
		cout << "6-variant 6" << endl;
		cout << "8-variant 8" << endl;
		cout << "9-variant 9" << endl;
		cout << "10-variant 10" << endl;
		cout << "1-exit" << endl;
		cin >> c;
		switch (c)
		{
		case 6: variant6(); break;
		case 8: variant8(); break;
		case 9: variant9(); break;
		case 10: variant10(); break;
		case 1: break;
		}
	} while (c != 1);

}