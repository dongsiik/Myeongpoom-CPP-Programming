#include <iostream>
using namespace std;

int main() {
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break;
		if (ch == ';') {
			cout << '\n';
			cin.ignore(100, '\n');
		}
		else cout << ch;
	}
}