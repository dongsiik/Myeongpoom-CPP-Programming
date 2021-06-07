#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = 0; i < s.size(); i++) {
			cout << s[s.size() - 1 - i];
		}
		cout << endl;
	}
	return 0;
}