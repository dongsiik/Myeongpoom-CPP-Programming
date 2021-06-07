#include <iostream>
#include <fstream>
using namespace std;

int* copy(int* src, int size) throw(int){
	if (size < 0) throw 1;
	if (size > 100) throw 2;
	int* p = new int[size];
	if (p == NULL) throw 3;
	if (src == NULL) {
		delete[] p;
		throw 4;
	}
	for (int n = 0; n < size; n++) p[n] = src[n];
	return p;
}

int main() {
	int x[] = { 1,2,3 };
	try {
		int* p = copy(x, 3);
		for (int i = 0; i < 3; i++) cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int n) {
		switch (n) {
		case 1:
			cout << "배열의 크기가 0보다 작습니다." << endl;
			break;
		case 2:
			cout << "배열의 크기가 100보다 큽니다." << endl;
			break;
		case 3:
			cout << "복사본 배열의 메모리 할당을 실패했습니다." << endl;
			break;
		case 4:
			cout << "원본 배열이 NULL로 전달되었습니다." << endl;
			break;
		}
	}
}