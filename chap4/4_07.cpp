#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle c[3];
	int r = 0;
	int cnt = 0;

	for (int i = 1; i < 4; i++) {
		cout << "원 " << i << "의 반지름 >> ";
		cin >> r;
		c[i - 1].setRadius(r);
		if (c[i - 1].getArea() > 100) cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
	return 0;
}