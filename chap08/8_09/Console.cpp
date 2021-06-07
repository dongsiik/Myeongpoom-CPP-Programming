#include "Console.h"

int Console::menuInput() {
	int tmp;
	cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
	cin >> tmp;
	return tmp;
}

int Console::timeInput() {
	int tmp;
	cout << "07시:1, 12시:2, 17시:3>> ";
	cin >> tmp;
	return tmp;
}

int Console::seatInput() {
	int tmp;
	cout << "좌석번호>> ";
	cin >> tmp;
	return tmp;
}

string Console::nameInput() {
	string tmp;
	cout << "이름 입력>> ";
	cin >> tmp;
	return tmp;
}