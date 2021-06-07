#include <iostream>
using namespace std;

int main() {
	int *arr = new int[5];
	float avg = 0;
	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	avg /= 5;
	cout << "평균 " << avg;
	return 0;
}