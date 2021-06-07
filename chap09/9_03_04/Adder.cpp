#include "Adder.h"

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >>";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}

void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}

int ForLoopAdder::calculate() {
	int sum = 0;
	for (int i = getX(); i <= getY(); i++) {
		sum += i;
	}
	return sum;
}

int WhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	while (i <= getY()) {
		sum += i;
		i++;
	}
	return sum;
}

int DoWhileLoopAdder::calculate() {
	int sum = 0;
	int i = getX();
	do {
		sum += i;
		i++;
	} while (i <= getY());

	return sum;
}