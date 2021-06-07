#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	srand((unsigned int)time(0));

	cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, s);
		if (s == "exit") break;
		s[rand() % s.size()] = 97 + (rand() % 26);
		cout << s << endl;
	}
	return 0;
}