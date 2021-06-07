#include <iostream>
#include "AirlineBook.h"
using namespace std;

void Schedule::show() {
	cout << time << ":\t";
	for (int i = 0; i < 8; i++) {
		cout << seat[i].getName() << "\t";
	}
	cout << endl;
}

void Schedule::reserve(int seatNum, string name) {
	seat[seatNum].reserve(name);
}

void Schedule::cancel(int seatNum, string name) {
	seat[seatNum].cancel(name);
}

void AirlineBook::run() {
	bool exit = true;
	int menuNum;
	int timeNum;
	int seatNum;
	string name;
	
	cout << "***** 한성항공에 오신 것을 환영합니다 *****\n\n";

	while (exit) {
		menuNum = Console::menuInput();

		switch (menuNum) {
		case 1:
			timeNum = Console::timeInput();
			schedule[timeNum-1].show();
			seatNum = Console::seatInput();
			name = Console::nameInput();
			schedule[timeNum-1].reserve(seatNum-1, name);
			cout << endl;
			break;
		case 2:
			timeNum = Console::timeInput();
			schedule[timeNum-1].show();
			seatNum = Console::seatInput();
			name = Console::nameInput();
			schedule[timeNum-1].cancel(seatNum-1, name);
			cout << endl;
			break;
		case 3:
			for (int i = 0; i < 3; i++) schedule[i].show();
			cout << endl;
			break;
		case 4:
			exit = false;
			cout << endl;
			break;
		}
	}
	cout << "예약 시스템을 종료합니다." << endl;
}