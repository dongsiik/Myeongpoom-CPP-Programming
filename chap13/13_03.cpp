#include <iostream>
using namespace std;

int get() throw(const char*) {
	int g;
	cout << "0~9 사이의 정수 입력 >> ";
	cin >> g;
	if (g < 0 || g>10) throw "input fault";
	return g;
}

int main() {
	while (true) {
		try {
			int a = get();
			int b = get();
			cout << a << "X" << b << "=" << a * b << endl;
		}
		catch (const char* s) {
			cout << s << " 예외 발생, 계산할 수 없음" << endl;
		}
	}
}