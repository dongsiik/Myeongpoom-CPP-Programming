#include <iostream>
#include "Sample.h"
using namespace std;

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i]<<' ';
	}
	cout << endl;
}

int Sample::big() {
	int n=p[0];
	for (int i = 1; i < size; i++) {
		if (p[i] > n) n = p[i];
	}
	return n;
}

Sample::~Sample() {
	delete[] p;
}