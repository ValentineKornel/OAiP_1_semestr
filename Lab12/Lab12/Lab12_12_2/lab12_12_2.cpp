#include <iostream>
using namespace std;
void main() {
	int n, i, k;
	int l = 0, m = 0, e = 0;
	int LESS[30];
	int MORE[30];
	int EQUAL[30];
	int A[30];
	int B[30];
	cout << "Enter size of array A ";
	cin >> n ;
	cout << "Enrer array A" << endl;
	for (i = 0; i < n; i++) {
		cin >> *(A + i);
	}
	cout << "Enter k";
	cin >> k;
	for (i = 0; i < n; i++) {
		if (*(A + i) < k)
			*(LESS + l++) = i;
		if (*(A + i) > k)
			*(MORE + m++) = i;
		if (*(A + i) == k)
			*(EQUAL + e++) = i;
	}
	cout << "equal to k: ";
	for (i = 0; i < e; i++) {
		cout << *(EQUAL + i) << " ";
	}
	cout << "more than k: ";
	for (i = 0; i < m; i++) {
		cout << *(MORE + i) << " ";
	}
	cout << "less than k: ";
	for (i = 0; i < l; i++) {
		cout << *(LESS + i) << " ";
	}
}