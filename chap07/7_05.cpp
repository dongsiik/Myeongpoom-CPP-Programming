//5.(2)에서 외부 함수로 구현할 연산자 함수는 주석처리하였음.

#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color operator +(Color& op2) {
		Color tmp;
		tmp.red = ((this->red + op2.red) > 255 ? 255 : this->red + op2.red);
		tmp.green = ((this->green + op2.green) > 255 ? 255 : this->green + op2.green);
		tmp.blue = ((this->blue + op2.blue) > 255 ? 255 : this->blue + op2.blue);
		return tmp;
	}
	bool operator ==(Color& op2) {
		if (this->red == op2.red && this->green == op2.green && this->blue == op2.blue) return true;
		else return false;
	}
//	friend Color operator +(Color& op1, Color& op2);
//	friend bool operator ==(Color& op1, Color& op2);
};
/*
Color operator +(Color& op1, Color& op2) {
	Color tmp;
	tmp.red = ((op1.red + op2.red) > 255 ? 255 : op1.red + op2.red);
	tmp.green = ((op1.green + op2.green) > 255 ? 255 : op1.green + op2.green);
	tmp.blue = ((op1.blue + op2.blue) > 255 ? 255 : op1.blue + op2.blue);
	return tmp;
}

bool operator ==(Color& op1, Color& op2) {
	if (op1.red == op2.red && op1.green == op2.green && op1.blue == op2.blue) return true;
	else return false;
}
*/
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia) cout << "보라색 맞음";
	else cout << "보라색 아님";
}