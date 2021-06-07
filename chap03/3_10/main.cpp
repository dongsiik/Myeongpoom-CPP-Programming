#include <iostream>
#include "calculator.h""
using namespace std;

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char ope;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> ope;

		if (ope == '+') {
			a.setValue(x, y);
			cout<<a.calculate()<<endl;
		}
		if (ope == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		if (ope == '*') {
			m.setValue(x, y);
			cout << m.calculate()<<endl;
		}
		if (ope == '/') {
			d.setValue(x, y);
			cout << d.calculate()<<endl;
		}

	}

	return 0;
}