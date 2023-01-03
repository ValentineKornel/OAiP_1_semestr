#include <iostream>
#include <ctime>
void main()
{

	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i = 1, j, n, A[N], B[N], sum1 = 0, sum2 = 0, week = 0;
	int rmn = 0, rmx = 99;
	cout << "¬ведите n";
	cin >> n;
	cout << "≈жедневные измерени€: ";
	srand((unsigned)time(NULL));
	for (i; i <= n; i++)
	{
		A[i] = rand() % rmx;
		sum1 += A[i];
		cout << A[i] << " ";
		if (i % 7 == 0 && i != 0) {
			cout << "(" << sum1 << ") ";
			if (sum1 > sum2) {
				sum2 = sum1;
				week += 1;
			}
			sum1 = 0;
		}
	}
	cout << "(" << sum1 << ")";
	if (sum1 > sum2) {
		sum2 = sum1;
		week += 1;
	}
	cout << endl;
	cout << sum2 << " " << week;
	


}