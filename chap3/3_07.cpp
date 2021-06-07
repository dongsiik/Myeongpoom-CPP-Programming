#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int nextOdd();
	int nextEven();
	int nextOddInRange(int a, int b);
	int nextEvenInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned int)time(0));
}

int SelectableRandom::nextOdd() {
	int n = rand();
	if (n % 2) return n + 1;
	else return n;
}

int SelectableRandom::nextEven() {
	int n = rand();
	if (n % 2) return n;
	else return n - 1;
}

int SelectableRandom::nextOddInRange(int a, int b) {
	a += (a + 1) % 2;
	b -= (b + 1) % 2;
	int range = (b - a) / 2 + 1;
	return a + (rand() % range) * 2;
}

int SelectableRandom::nextEvenInRange(int a, int b) {
	a += a % 2;
	b -= b % 2;
	int range=(b - a) / 2 + 1;
	return a + (rand() % range) * 2;
}

int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextEven();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextOddInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}