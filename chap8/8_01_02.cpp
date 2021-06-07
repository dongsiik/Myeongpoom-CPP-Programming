//같은 Circle 클래스를 사용하는 1,2번을 한 파일에 작성하였음.
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "") :Circle(radius) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void show() { cout << "반지름이 " << getRadius() << "인 " << name; }
};


int main() {
/*	1번 문제의 main 함수
	NamedCircle waffle(3, "waffle");
	waffle.show(); */

	//2번 문제의 main 함수
	NamedCircle pizza[5];
	string name;
	int radius;
	int maxIndex = 0;
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);

		if (radius > pizza[maxIndex].getRadius()) maxIndex = i;
	}
	cout << "가장 면적이 큰 피자는 " << pizza[maxIndex].getName() << "입니다.";
}