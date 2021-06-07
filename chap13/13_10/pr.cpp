#include <iostream>
using namespace std;

extern "C" void printline(int count);

int main() {
	for (int i = 1; i <= 3; i++) printline(i);
}