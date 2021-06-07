#include "GraphicEditor.h"
#include "UI.h"
#include <iostream>
using namespace std;

int GraphicEditor::menu() {
	int input;
	input = UI::menuUI();
	return input;

}
void GraphicEditor::insert() {
	int input;
	input = UI::insertUI();
	switch (input) {
	case 1:
		v.push_back(new Line());
		break;
	case 2:
		v.push_back(new Circle());
		break;
	case 3:
		v.push_back(new Rect());
		break;
	}
}

void GraphicEditor::remove() {
	int input;
	input = UI::removeUI();
	auto it = v.begin() + input;
	Shape* tmp = *it;
	it = v.erase(it);
	delete tmp;
}

void GraphicEditor::show() {
	for (int i = 0; i < v.size(); i++) {
		cout << i << ": ";
		v[i]->paint();
	}
}

void GraphicEditor::run() {
	cout << "그래픽 에디터입니다." << endl;
	while (true) {
		int n = menu();
		switch (n) {
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
			return;
		}
	}
}