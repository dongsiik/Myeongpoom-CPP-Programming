#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* tmp = new T[sizea + sizeb];
	for (int i = 0; i < sizea;i++) tmp[i] = a[i];
	for (int i = 0; i < sizeb; i++) tmp[i + sizea] = b[i];
	return tmp;
}

int main() {
	int x[] = { 1,2 };
	int y[] = { 3,4,5,6 };
	int* xy = concat(x, 2, y, 4);
	for (int i = 0; i < 6; i++) cout << xy[i] << ' ';
	delete[] xy;
	cout << endl;

	char a[] = { 'H','i' };
	char b[] = { 'H','o','w',' ','a','r','e',' ','y','o','u' };
	char* ab = concat(a, 2, b, 11);
	for (int i = 0; i < 13; i++) cout << ab[i] << ' ';
	delete[] ab;
	cout << endl;

}