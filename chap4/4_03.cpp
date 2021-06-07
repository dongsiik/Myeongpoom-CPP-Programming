#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int cnt=0;

	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') cnt++;
	}

	/* 3.(2) Answer
	int sIndex = 0;
	while (true) {
		int fIndex = s.find("a", sIndex);
		if (fIndex == -1)	break;
		sIndex = fIndex + 1;
		cnt++;
	} */
	
	cout << "문자 a는 " << cnt << "개 있습니다.";
	return 0;
}