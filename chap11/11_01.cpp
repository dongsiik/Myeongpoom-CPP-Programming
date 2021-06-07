#include <iostream>
using namespace std;

int main() {
	int ch;
	int cnt = 0;
	while ((ch = cin.get()) != EOF) {
		if (ch == 'a') cnt++;
		if (ch == '\n') break;
	}
	cout << cnt;
}