#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

void printDec(int n) {
	cout << setw(6) << dec << n;
}

void printHexa(int n) {
	cout << setw(6) << hex << n;
}

void printChar(int n) {
	if (isprint(n) != 0) cout << setw(6) << (char)n;
	else cout << setw(6) << ".";
}

int main() {
	cout.setf(ios::left);
	for (int i = 0; i < 4; i++) {
		cout << setw(6) << "dec" << setw(6) << "hexa" << setw(6) << "char";
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << setw(6) << "___" << setw(6) << "____" << setw(6) << "____";
	}
	cout << endl;

	for (int i = 0; i < 128; i++) {
		if (i > 1 && i % 4 == 0) cout << endl;
		printDec(i);
		printHexa(i);
		printChar(i);
	}
}