#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() { draw(); }
};

class Circle :public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
};

class Rect :public Shape {
protected:
	virtual void draw() { cout << "Rectangle" << endl; }
};

class Line :public Shape {
protected:
	virtual void draw() { cout << "Line" << endl; }
};

#endif