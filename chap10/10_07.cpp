#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator >(Circle& op2) { //새로 작성한 연산자 중복
		if (this->radius > op2.getRadius()) return true;
		else return false;
	}
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;	//기존의 소스에는 Circle끼리 대소비교를 할 수 없어서 오류가 발생했음.
	else return b;
}


int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}