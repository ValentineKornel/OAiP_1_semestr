#include <iostream>
using namespace std;
void main() {
	int i, n, j;
	int count = 0;
	bool flag;
	int Z[30];
	cout << "Enter n ";
	cin >> n;
	cout << "Enter array Z " << endl;
	for (i = 0; i < n; i++) {
		cin >> *(Z + i);
	}
	for (i = 0; i < n; i++) {
		flag = false;
		for (j = i + 1; j < n; j++) {
			if (*(Z + j) == *(Z + i))
				flag = true;
		}
		if (flag == false)
			count++;
	}
	cout << count - 1;
}