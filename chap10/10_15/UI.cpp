#include <iostream>
#include "UI.h"
using namespace std;

int UI::menuUI() {
	int menu;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4  >> ";
	cin >> menu;
	return menu;
}

void UI::insertUI(int& radius, string& name) {
	cout << "생성하고자 하는 원의 반지름과 이름은 >>";
	cin >> radius >> name;
}

string UI::removeUI() {
	string name;
	cout << "삭제하고자 하는 원의 이름은 >>";
	cin >> name;
	return name;
}