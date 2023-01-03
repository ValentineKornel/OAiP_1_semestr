#include <iostream>
using namespace std;
void main() {
	int i, n, m;
	bool flag = false;
	int biggest_a = -999;
	int A[30];
	int B[30];
	cout << "Enter n ";
	cin >> n;
	cout << "Enter array A" << endl;
	for (i = 0; i < n; i++) {
		cin >> *(A + i);
		if (*(A + i) > biggest_a)
			biggest_a = *(A + i);
	}
	cout << "Enter m";
	cin >> m;
	cout << "Enter array A" << endl;
	for (i = 0; i < m; i++)
		cin >> *(B + i);
	for (i = 0; i < m; i++) {
		if (biggest_a == *(B + i))
			flag = true;
	}
	if (flag == false)
		cout << "No";
	else
		cout << "Yes";
}