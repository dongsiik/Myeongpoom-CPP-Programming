#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int &big) {
	if (a == b) {
		big = a;
		return true;
	}
	else {
		big = (a > b ? a : b);
		return false;
	}
}

int main() {
	int a, b;
	int big = 0;
	cout << "비교할 정수 두 개 입력 ";
	cin >> a >> b;
	b = bigger(a, b, big);
	if (b == true) cout << "두 값은 같습니다." << endl;
	else cout << "큰 값은 " << big;
	return 0;
}