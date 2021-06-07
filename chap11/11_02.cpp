#include <iostream>
using namespace std;

int main() {
	char ch;
	int cnt = 0;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break;
		if (ch == '\n') break;
		if (ch == ' ') cnt++;
	}
	cout << cnt;
}