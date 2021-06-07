//같은 LoopAdder class를 상속받아 사용하는 3,4번을 함께 작성하였음.

#include <iostream>
#include <string>
#include "Adder.h"
using namespace std;


int main() {
	ForLoopAdder forLoop("for Loop");
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	forLoop.run();
	whileLoop.run();
	doWhileLoop.run();
}