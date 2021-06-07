//문제 12_14의 조건을 만족하는 소스코드가 616쪽에 있는 예제 12-8에 이미 작성되어 있어서 그대로 옮겼음.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini", ios::in | ios::binary);
	if (!fin) {
		cout << "파일 열기 실패" << endl;
		return 0;
	}
	int cnt = 0;
	char s[32];
	while (!fin.eof()) {
		fin.read(s, 32);
		int n = fin.gcount();
		cout.write(s, n);
		cnt += n;
	}
	cout << "읽은 바이트 수는 " << cnt << endl;
	fin.close();
}