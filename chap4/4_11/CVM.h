#ifndef CVM_H
#define CVM_H

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size--; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

#endif