#include <iostream>
#include "Sample.h"
using namespace std;

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
	return 0;
}