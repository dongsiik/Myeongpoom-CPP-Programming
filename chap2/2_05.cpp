#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cout << "문자열을 입력하라(100개 미만).\n";
	cin.getline(str, 100,'\n');
	int cnt = 0;
	for (int i = 0; i<strlen(str); i++) {
		if (str[i] == 'x') cnt++;
	}
	cout << "x의 개수는 " << cnt;

	return 0;
}