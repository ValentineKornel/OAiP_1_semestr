#include <iostream>
#include <ctime>
using namespace std;
int getRandomNumber(int min, int max)
{
	srand(time(NULL));
	int number;
	number = rand() % max;
	return number;
}
void main() {
	int i = 0, num;
	for (i; i < 5; i++) {
		num = getRandomNumber(0, 100);
		cout << num << endl;
	}
}