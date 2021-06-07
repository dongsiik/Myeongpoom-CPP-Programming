#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];
	string s;
	int r;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> s >> r;
		p[i].setCircle(s, r);
	}
}

CircleManager::~CircleManager() {
	delete[] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >>";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << name << "의 면적은 " << p[i].getArea() << endl;
			return;
		}
	}
	cout << "이름이 일치하는 원이 없습니다." << endl;
}

void CircleManager::searchByArea() {
	int area;
	int chk = 0;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다.\n";
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
			chk = 1;
		}
	}
	if (chk == 0) cout << "해당하는 원이 없습니다.\n";
	else cout << endl;
}
int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager CM(n);
	CM.searchByName();
	CM.searchByArea();
	return 0;
}