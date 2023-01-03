#include <iostream>
using namespace std;
void main() {
	int n, i, t;
	int less_a = 0;
	int less_b = 0;
	int *bigger_arr = &n;
	int *smaller_arr = &n;
	int A[30];
	int B[30];
	cout << "Enter size of arrays ";
	cin >> n;
	cout << "Enrer array A" << endl;
	for (i = 0; i < n; i++) {
		cin >> *(A + i);
	}
	cout << "Enrer array B" << endl;
	for (i = 0; i < n; i++) {
		cin >> *(B + i);
	}
	cout << "Enter t ";
	cin >> t;
	for (i = 0; i < n; i++) {
		if (*(A + i) < t)
			less_a++;
		if (*(B + i) < t)
			less_b++;
	}
	if (less_a >> less_b) {
		for (i = 0; i < n; i++) {
			cout << *(A + i) << " ";
		}
		cout << endl;
		for (i = 0; i < n; i++) {
			cout << *(B + i) << " ";
		}
	}
	else {
		for (i = 0; i < n; i++) {
			cout << *(B + i) << " ";
		}
		cout << endl;
		for (i = 0; i < n; i++) {
			cout << *(A + i) << " ";
		}
	}
	

}