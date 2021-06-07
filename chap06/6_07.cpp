#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned int)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	return rand() % (max - min + 1);
}

char Random::nextAlphabet() {
	return 'A' + rand() % 26;
}

double Random::nextDouble() {
	return (double)rand() / 32767;
}

int main() {
	Random::seed();
	cout << "1에서 100까지의 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';
	cout << endl;
	cout << "알파벳을 랜덤하게 10개 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl;
	cout << "랜덤한 실수를 10개 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout <<(double) Random::nextDouble() << ' ';
	cout << endl;
	return 0;
}