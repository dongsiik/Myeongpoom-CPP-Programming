#include <iostream>
using namespace std;

int main() {
	char ch;
	cin.ignore(100, ';');
	while (true) {
		cin.get(ch);
		cout << ch;
		if (cin.eof()) break;
		if (ch == '\n') {
			cin.ignore(100, ';');
		}
	}
}