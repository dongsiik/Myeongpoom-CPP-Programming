#include <iostream>
using namespace std;

void half(double& n) { n /= 2; }

int main() {
	double n = 20;
	half(n);
	cout << n;
	return 0;
}