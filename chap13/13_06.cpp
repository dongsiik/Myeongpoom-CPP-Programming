#include <iostream>
using namespace std;

int* concat(int a[], int sizea, int b[], int sizeb) {
	if (a == NULL) throw 11;
	if (b == NULL) throw 12;
	if (sizea < 1) throw 21;
	if (sizeb < 1) throw 22;
	int* p = new int[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		p[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++) {
		p[i + sizea] = b[i];
	}
	return p;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	int y[] = { 10,20,30,40 };
	try {
		int* p = concat(x, 5, y, 4);
		for (int n = 0; n < 9; n++) cout << p[n] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int failCode) {
		cout << "오류 코드 : " << failCode << endl;
	}
}