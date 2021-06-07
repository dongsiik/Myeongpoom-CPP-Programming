#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cout << "새 암호를 입력하세요>>";
	getline(cin, s1);
	cout << "새 암호를 다시 한 번 입력하세요>>";
	getline(cin, s2);
	if(s1==s2) 	cout << "같습니다";
	else		cout << "같지 않습니다";
	
	return 0;
}