#include <iostream>
using namespace std;


int main() {
	int menuNum, people;
	string menu[3] = { "짬뽕", "짜장", "군만두" };
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while(true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> menuNum;
		if (menuNum == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else if (menuNum > 0 && menuNum < 4) {
			cout << "몇인분?";
			cin >> people;
			cout << menu[menuNum - 1] << ' ' << people << "인분 나왔습니다" << endl;
		}
		else cout << "다시 주문하세요!!"<<endl;
	}
	return 0;
}