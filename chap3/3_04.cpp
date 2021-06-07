#include <iostream>
#include <string>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar) { this->coffee = coffee; this->sugar = sugar; this->water = water; }
	void show();
	void fill() { coffee = 10; water = 10; sugar = 10; }
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
};

void CoffeeMachine::show() {
	cout << "커피 머신 상태,\t커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

void CoffeeMachine::drinkEspresso() {
	if (coffee == 0 || water == 0) {
		cout << "재료가 부족합니다." << endl;
	}
	else {
		coffee -= 1;
		water -= 1;
	}
}

void CoffeeMachine::drinkAmericano() {
	if (coffee == 0 || water <2 ) {
		cout << "재료가 부족합니다." << endl;
	}
	else {
		coffee -= 1;
		water -= 2;
	}
}
void CoffeeMachine::drinkSugarCoffee() {
	if (coffee == 0 || water <2 || sugar==0) {
		cout << "재료가 부족합니다." << endl;
	}
	else {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}