//같은 ColorPoint 클래스를 사용하는 3,4번을 한 파일에 작성하였음.
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x=0, int y=0) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint :public Point {
	string color;
public:
	ColorPoint(int x=0, int y=0, string color="BLACK") :Point(x, y) { this->color = color; }
	void setPoint(int x, int y) { move(x, y); }
	void setColor(string color) { this->color = color; }
	void show() { cout << color << "색으로 (" << getX() << ',' << getY() << ")에 위치한 점입니다.\n"; }
};

int main() {
/*	3번 문제의 main 함수
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); */

	//4번 문제의 main함수
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}