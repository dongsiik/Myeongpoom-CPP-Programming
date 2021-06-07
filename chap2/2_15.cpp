#include <iostream>
#include <string>
using namespace std;

int main() {
	int left, right;
	char ope;
	unsigned int para1=0, para2=0;
	string str;

	while (true) {
		cout << "? ";
		getline(cin, str);
		for (unsigned int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				para1 = i;
				break;
			}
		}
		for (unsigned int i = para1 + 1; i < str.length(); i++) {
			if (str[i] == ' ') {
				para2 = i;
				break;
			}
		}
		left = stoi(str.substr(0, para1));
		ope = str[para1 + 1];
		right = stoi(str.substr(para2 + 1));
		cout << left << ' ' << ope <<' '<< right << " = ";
		if (ope == '+') cout << left + right << endl;
		if (ope == '-') cout << left - right << endl;
		if (ope == '*') cout << left * right << endl;
		if (ope == '/') cout << left / right << endl;
		if (ope == '%') cout << left % right << endl;
	}
	return 0;
}