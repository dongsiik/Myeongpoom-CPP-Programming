#include <iostream>
using namespace std;

template <class T>
T biggest(T x[], int size) {
	T tmp = x[0];
	for (int i = 1; i < size; i++) {
		if (x[i] > tmp) tmp = x[i];
	}
	return tmp;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 1.1, 5.5, 3.3, 2.2 };
	cout << biggest(y, 5) << endl;
}