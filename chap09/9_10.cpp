#include <iostream>
using namespace std;

class UI {
public:
	static int input0() {
		int tmp;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> tmp;
		return tmp;
	}
	static int input1() {
		int tmp;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> tmp;
		return tmp;
	}
	static int input2() {
		int tmp;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> tmp;
		return tmp;
	}
};

class Shape {
private:
	Shape* next;
public:
	Shape() { next = NULL; }
	virtual ~Shape() {  }
	Shape* add(Shape* n) { this->next = n; return n; }
	Shape* getNext() { return next; }
	virtual void show() = 0;
};

class Line :public Shape {
public:
	virtual void show() { cout << "Line" << endl; }
};

class Circle :public Shape {
public:
	virtual void show() { cout << "Circle" << endl; }
};

class Rect : public Shape {
public:
	virtual void show() { cout << "Rectangle" << endl; }
};

class GraphicEditor {
private:
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor() { pStart = NULL; pLast = NULL; }
	~GraphicEditor() { delete pStart; delete pLast; }
	void addShape(int n);
	void deleteShape(int n);
	void showAll();
	void run();
};

void GraphicEditor::addShape(int n) {
	if (pLast == NULL) {
		switch (n) {
		case 1:
			pStart = new Line();
			pLast = pStart;
			break;
		case 2:
			pStart = new Circle();
			pLast = pStart;
			break;
		case 3:
			pStart = new Rect();
			pLast = pStart;
			break;
		}
	}
	else {
		switch (n) {
		case 1:
			pLast = pLast->add(new Line());
			break;
		case 2:
			pLast = pLast->add(new Circle());
			break;
		case 3:
			pLast = pLast->add(new Rect());
		}
	}
}

void GraphicEditor::deleteShape(int n) {
	if (n == 0) {
		Shape* tmp = pStart->getNext();
		delete pStart;
		pStart = tmp;
		if (tmp == NULL) pLast = NULL;
	}
	else {
		int i = 0;
		Shape* tmp = pStart;
		for (int i = 0; i < n-1; i++) {
			tmp = tmp->getNext();
		}
		if (tmp->getNext() == pLast) {
			delete tmp->getNext();
			tmp->add(NULL);
			pLast = tmp;
		}
		else {
			Shape* nnext = tmp->getNext()->getNext();
			delete tmp->getNext();
			tmp->add(nnext);
		}
	}
}

void GraphicEditor::showAll() {
	int i = 0;
	Shape* p = pStart;
	while (p != NULL) {
		cout << i << ": ";
		p->show();
		p = p->getNext();
		i++;
	}
}

void GraphicEditor::run() {
	int i;
	bool exit=true;
	cout << "그래픽 에디터입니다." << endl;
	while (exit) {
		i = UI::input0();
		switch (i) {
		case 1:
			i = UI::input1();
			addShape(i);
			break;
		case 2:
			i = UI::input2();
			deleteShape(i);
			break;
		case 3:
			showAll();
			break;
		case 4:
			exit = false;
		}
	}
}

int main() {
	GraphicEditor* editor = new GraphicEditor;
	editor->run();
}