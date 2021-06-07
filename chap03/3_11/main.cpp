#include <iostream>
#include "box.h""
using namespace std;

int main() {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setfill('^');
	b.draw();
	return 0;
}