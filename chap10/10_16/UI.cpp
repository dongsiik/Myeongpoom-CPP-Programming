#include <iostream>
#include "UI.h"
using namespace std;

int UI::menuUI() {
	int menu;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4  >> ";
	cin >> menu;
	return menu;
}

int UI::insertUI() {
	int tmp;
	cout << "선:1, 원:2, 사각형:3 >> ";
	cin >> tmp;
	return tmp;
}

int UI::removeUI() {
	int tmp;
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> tmp;
	return tmp;
}