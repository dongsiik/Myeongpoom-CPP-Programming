#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(const SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator +(SortedArray& op2);
	SortedArray& operator =(const SortedArray& op2);
	void show();
};

#endif