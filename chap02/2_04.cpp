#include <iostream>
using namespace std;

int main() {
	float a[5];
	cout << "5 개의 실수를 입력하라>>";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	float max = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i] > max) max = a[i];
	}
	cout << "제일 큰 수 = " << max;
	return 0;
}