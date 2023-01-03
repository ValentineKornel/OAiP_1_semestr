#include <iostream>
using namespace std;
void main() {
	int n, i;
	int less = 0;
	int more = 0;
	int equal = 0;
	int A[30];
	int B[30];
	cout << "Enter n ";
	cin >> n;
	cout << "Enrer array A";
	for (i = 0; i < n; i++) {
		cin >> *(A + i);
	}
	cout << "Enrer array B";
	for (i = 0; i < n; i++) {
		cin >> *(B + i);
	}
	for (i = 0; i < n; i++) {
		if (*(A + i) < *(B + i))
			less++;
		if (*(A + i) > *(B + i))
			more++;
		if (*(A + i) == *(B + i))
			equal++;
	}
	cout << "for A[k] = B[k], k = " << equal << endl;
	cout << "for A[k] > B[k], k = " << more << endl;
	cout << "for A[k] < B[k], k = " << less << endl;
}