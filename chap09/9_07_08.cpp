//8번은 7번의 Shape 클래스를 한 줄만 수정하면 되므로 같은 파일에 작성하였음.

#include <iostream>
using namespace std;

class Shape {
protected:
	string name;
	int width, height;
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; } //8번을 위해서는 virtual double getArea()=0;으로 대신하면 됨
	string getName() { return name; }
};

class Oval :public Shape {
public:
	Oval(string n, int w, int h) :Shape(n, w, h) {}
	virtual double getArea() { return 3.14 * width * height; }
};

class Rect :public Shape {
public:
	Rect(string n, int w, int h) :Shape(n, w, h) {}
	virtual double getArea() { return width * height; }
};

class Triangular :public Shape {
public:
	Triangular(string n, int w, int h) :Shape(n, w, h) {}
	virtual double getArea() { return 0.5 * width * height; }
};

int main() {
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

	for (int i = 0; i < 3; i++) delete p[i];
}