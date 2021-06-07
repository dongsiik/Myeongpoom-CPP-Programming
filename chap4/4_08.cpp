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
	int n;
	int r;
	int cnt = 0;

	cout << "원의 개수 >> ";
	cin >> n;
	Circle* c = new Circle[n];

	for (int i =0; i < n; i++) {
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다";
	return 0;
}