#include "CircleManager.h"
#include "UI.h"
#include <iostream>
using namespace std;

void CircleManager::insert() {
	int radius = 0;
	string name = "";

	UI::insertUI(radius, name);
	v.push_back(new Circle(radius, name));
}

void CircleManager::remove() {
	string name = "";
	name = UI::removeUI();

	auto it = v.begin();
	while (it != v.end()) {
		Circle* tmp = *it;
		if (tmp->getName() == name) {
			it = v.erase(it);
			delete tmp;
		}
		else it++;
	}
}

void CircleManager::show() {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]->getName() << endl;
	}
}

void CircleManager::run() {
	cout << "원을 삽입하고 삭제하는 프로그랩입니다." << endl;
	bool conti = true;
	while (conti) {
		int menu = UI::menuUI();
		switch (menu) {
		case 1:
			insert();
			break;
		case 2:
			remove();
			break;
		case 3:
			show();
			break;
		case 4:
			conti = false;
			break;
		default:
			cout << "메뉴를 다시 선택해주세요" << endl;
		}
	}
}
