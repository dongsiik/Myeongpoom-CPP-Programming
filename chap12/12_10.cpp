#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ifstream first("a.jpg", ios::in | ios::binary);
	if (!first) {
		cout << "첫번째 파일 열기 실패" << endl;
		return 0;
	}
	ifstream second("b.jpg", ios::in | ios::binary);
	if (!second) {
		cout << "두번째 파일 열기 실패" << endl;
		return 0;
	}
	bool chk = true;
	int f;
	while ((f = first.get()) != EOF) {
		int s = second.get();
		if (s == EOF) chk = false;
		if (f != s) chk = false;
	}

	int s = second.get();
	if (s != EOF) chk = false;

	if (chk) cout << "같음";
	else cout << "다름";

}