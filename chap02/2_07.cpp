#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char untilYes[100];
	do {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(untilYes, 100);

	} while (strcmp(untilYes, "yes"));
	cout << "종료합니다...";

	return 0;
}