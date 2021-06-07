#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> WHO;
	string name;
	string pw;
	int menu;
	bool conti = true;

	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
	while (conti) {
		cout << "삽입:1, 검사:2, 종료: 3 >>  ";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "이름 암호>> ";
			cin >> name >> pw;
			WHO.insert(make_pair(name, pw));
			break;
		case 2:
			cout << "이름? ";
			cin >> name;
			if (WHO.find(name) == WHO.end()) cout << "해당하는 이름 없음" << endl;
			else {
				while (true) {
					cout << "암호? ";
					cin >> pw;
					if (pw == WHO[name]) {
						cout << "통과!!" << endl;
						break;
					}
					else cout << "실패~~" << endl;
				}
			}
			break;
		case 3:
			cout << "프로그램을 종료합니다...";
			conti = false;
			break;
		}
	}
}