#pragma once
#include <iostream>
#include <string>
using namespace std;

class Console {
public:
	static int menuInput();
	static int timeInput();
	static int seatInput();
	static string nameInput();
};