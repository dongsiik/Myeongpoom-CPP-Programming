#include <iostream>
#include "Sample.h"
using namespace std;

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
	return 0;
}