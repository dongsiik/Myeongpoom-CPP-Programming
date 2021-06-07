//���� Circle Ŭ������ ����ϴ� 1,2���� �� ���Ͽ� �ۼ��Ͽ���.
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
	void show() { cout << "�������� " << getRadius() << "�� " << name; }
};


int main() {
/*	1�� ������ main �Լ�
	NamedCircle waffle(3, "waffle");
	waffle.show(); */

	//2�� ������ main �Լ�
	NamedCircle pizza[5];
	string name;
	int radius;
	int maxIndex = 0;
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);

		if (radius > pizza[maxIndex].getRadius()) maxIndex = i;
	}
	cout << "���� ������ ū ���ڴ� " << pizza[maxIndex].getName() << "�Դϴ�.";
}