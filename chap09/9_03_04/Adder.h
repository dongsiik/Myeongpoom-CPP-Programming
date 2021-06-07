#ifndef ADDER_H
#define ADDER_H

#include <string>
#include <iostream>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run();
};

class ForLoopAdder :public LoopAdder {
protected:
	virtual int calculate();
public:
	ForLoopAdder(string name) :LoopAdder(name) {}
};

class WhileLoopAdder :public LoopAdder {
protected:
	virtual int calculate();
public:
	WhileLoopAdder(string name) :LoopAdder(name) {}
};

class DoWhileLoopAdder :public LoopAdder {
protected:
	virtual int calculate();
public:
	DoWhileLoopAdder(string name) :LoopAdder(name) {}
};

#endif