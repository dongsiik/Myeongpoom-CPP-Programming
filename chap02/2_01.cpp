#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 11; j++) {
			cout << 10 * i + j << "\t";
		}
		cout << endl;
	}
	return 0;
}