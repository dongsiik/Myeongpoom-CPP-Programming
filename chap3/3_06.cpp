#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};

EvenRandom::EvenRandom() {
	srand((unsigned int)time(0));
}

int EvenRandom::next() {
	int n = rand();
	if (n % 2) return n;
	else return n - 1;
}

int EvenRandom::nextInRange(int a, int b) {
	a += a % 2;
	b -= b % 2;
	int range=(b - a) / 2 + 1;
	return a + (rand() % range) * 2;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}