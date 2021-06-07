#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);
	for (int i = 1; i <= str.length(); i++) {
		cout << str.substr(0, i) << endl;
	}

	return 0;
}