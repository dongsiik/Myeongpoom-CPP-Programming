#include <iostream>
#include "SortedArray.h"
using namespace std;

void SortedArray::sort() {
	for (int i = 0; i < size-1; i++) {
		int idx = i;
		for (int j = i; j < size; j++) {
			if (p[j] < p[idx]) idx = j;
		}
		int t = p[i];
		p[i] = p[idx];
		p[idx] = t;
	}
}

SortedArray::SortedArray() {
	size = 0;
	p = NULL;
}

SortedArray::SortedArray(const SortedArray& src) {
	this->size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++) p[i] = src.p[i];
	this->sort();
}

SortedArray::SortedArray(int p[], int size) {
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) this->p[i] = p[i];
	this->sort();
}

SortedArray::~SortedArray() { delete[] p; }

SortedArray SortedArray::operator+(SortedArray& op2) {
	SortedArray tmp;
	tmp.size = this->size + op2.size;
	tmp.p = new int[tmp.size];
	for (int i = 0; i <this->size; i++) tmp.p[i] = this->p[i];
	for (int i = this->size; i < tmp.size; i++) tmp.p[i] = op2.p[i - this->size];
	tmp.sort();
	return tmp;
}

SortedArray& SortedArray::operator=(const SortedArray& op2) {
	delete[] this->p;
	this->size = op2.size;
	p = new int[size];
	for (int i = 0; i < size; i++) p[i] = op2.p[i];
	this->sort();
	return *this;
}

void SortedArray::show() {
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) cout << this->p[i] << ' ';
	cout << endl;
}