#include <iostream>
using namespace std;

template <class T>
bool equalArrays(T x[], T y[], int size) {
	bool tf = true;
	for (int i = 0; i < size; i++) {
		if (x[i] != y[i]) {
			tf = false;
			break;
		}
	}
	return tf;
}

int main() {
	int x[] = { 1, 10,100, 5, 4 };
	int y[] = { 1, 10,100, 5, 4 };
	if (equalArrays(x, y, 5)) cout << "같다";
	else cout << "다르다";

	cout << endl;

	double a[] = { 1.1, 2.2, 3.3, 3.4 };
	double b[] = { 1.1, 2.2, 3.3, 4.4 };
	if (equalArrays(a, b, 5)) cout << "같다";
	else cout << "다르다";


}