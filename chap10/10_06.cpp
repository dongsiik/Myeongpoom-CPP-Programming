#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	int cnt = 0;
	for (int j = 0; j < sizeMinus; j++) {
		for (int i = 0; i < sizeSrc; i++) {
			if (src[i] == minus[j]) {
				cnt++;
				src[i] = NULL;
			}
		}
	}
	retSize = sizeSrc - cnt;
	T* rmv = new T[retSize];
	int idx = 0;
	for (int i = 0; i < sizeSrc; i++) {
		if (src[i] != NULL) {
			rmv[idx] = src[i];
			idx++;
		}
	}
	return rmv;
}

int main() {
	int retSize = 0;

	int x[] = { 1,2,3,4,5 };
	int y[] = { 3,4,5 };
	int* xy = remove(x, 5, y, 3, retSize);
	for (int i = 0; i < retSize; i++) cout << xy[i] << ' ';
	delete[] xy;
	cout << endl;

	char a[] = { 'h','i','m','i','k','e' };
	char b[] = { 'i','e' };
	char* ab = remove(a, 6, b, 2, retSize);
	for (int i = 0; i < retSize; i++) cout << ab[i] << ' ';
	delete[] ab;
	cout << endl;
}