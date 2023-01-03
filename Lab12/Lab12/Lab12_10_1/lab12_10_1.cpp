#include <iostream>
using namespace std;
void main() {
	bool flag;
	int i, j;
	int smallest_a = 999;
	int A[5] = { 5, 6, 4, 1, 4 };
	int B[5] = { 9, 5, 6, 9, 19 };
	int C[5];

	for (i = 0; i < 5; i++) 
	{
		flag = false;
		for (j = 0; j < 5; j++) 
		{
			if (*(A + i) == *(B + j))
				flag = true;
		}
		if (*(A + i) < smallest_a && flag == false)
			smallest_a = *(A + i);
	}
	cout << smallest_a << endl;

	for (i = 0; i < 5; i++) {
		*(C + i) = *(A + i) + *(B + i);
		cout << *(C + i) << ' ';
	}
	
}