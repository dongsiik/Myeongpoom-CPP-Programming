#include <iostream>
#include "CVM.h"
using namespace std;

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) tong[i].fill();
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) cout << "원료가 부족합니다\n";
	else {
		cout << "에스프레소 드세요\n";
		tong[0].consume();
		tong[1].consume();
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) cout << "원료가 부족합니다\n";
	else {
		cout << "아메리카노 드세요\n";
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize()<1) cout << "원료가 부족합니다\n";
	else {
		cout << "설탕커피 드세요\n";
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int choice;
	cout << "***** 커피자판기를 작동합니다. *****\n";
	while (true) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
		cin >> choice;
		switch (choice) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}
}