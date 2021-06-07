#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, int> hScore;
	string name;
	int score;
	int menu;
	bool conti = true;

	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	while (conti) {
		cout << "입력:1, 조회:2, 종료: 3 >>  ";
		cin >> menu;
		switch (menu) {
		case 1:
			cout << "이름과 점수>> ";
			cin >> name >> score;
			hScore.insert(make_pair(name, score));
			break;
		case 2:
			cout << "이름>> ";
			cin >> name;
			if (hScore.find(name) == hScore.end()) cout << "해당하는 이름 없음" << endl;
			else cout << name << "의 점수는 " << hScore[name] << endl;
			break;
		case 3:
			cout << "프로그램을 종료합니다...";
			conti = false;
			break;
		}
	}
}