//보통 커피와 블랙 커피의 재료가 문제와 예시에 명시되어 있지 않아
//보통 커피는 커피, 크림, 물, 컵을 재료로 블랙커피는 커피, 물 , 컵을 재료로 쓴다고 가정하였음

#include <iostream>
#include <iomanip>
using namespace std;

class tong {
	string name;
	int amount;
public:
	tong(string name = "", int amount = 3) { this->name = name; this->amount = amount; }
	friend ostream& operator<< (ostream & outs, tong & t);
	void fill() { amount = 3; }
	void use(int amount=1) { this->amount -= amount; }
	bool amountChk(int amount=1) {
		if (this->amount >= amount) return true;
		else return false;
	}
};

class CoffeeMachine {
	tong* t;
public:
	CoffeeMachine() {
		cout << "------명품 커피 자판기켭니다.------" << endl;
		t = new tong[5]{ tong("Coffee"),tong("Sugar"),tong("CREAM"),tong("Water"),tong("Cup") };
		cout << *this << endl;
	}
	friend ostream& operator<<(ostream& outs, CoffeeMachine& CM);
	void run();
};

istream& menu(istream& ins) {
	cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>> ";
	return ins;
}

ostream& operator<<(ostream& outs, tong& t) {
	outs << setw(8) << t.name;
	for (int i = 0; i < t.amount; i++) outs << '*';
	outs << '\n';
	return outs;
}

ostream& operator<<(ostream& outs, CoffeeMachine& CM) {
	for (int i = 0; i < 5; i++) outs << CM.t[i];
	outs << '\n';
	return outs;
}

void CoffeeMachine::run() {
	int choice;
	while (true) {
		cin >> menu >> choice;
		switch (choice) {
		case 4:
			return;
		case 3:
			for (int i = 0; i < 5; i++) t[i].fill();
			cout << "모든 통을 채웁니다.~~" << endl<< *this;
			break;
		case 0:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk() && t[2].amountChk()) {
				cout << "맛있는 보통 커피 나왔습니다~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				t[2].use();
				cout << *this;
			}
			else {
				cout << "재료가 부족합니다~~" << endl;
				cout << *this;
			}
			break;
		case 1:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk() && t[1].amountChk()) {
				cout << "맛있는 설탕 커피 나왔습니다~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				t[1].use();
				cout << *this;
			}
			else {
				cout << "재료가 부족합니다~~" << endl;
				cout << *this;
			}
			break;
		case 2:
			if (t[0].amountChk() && t[3].amountChk() && t[4].amountChk()) {
				cout << "맛있는 블랙 커피 나왔습니다~~" << endl;
				t[0].use();
				t[3].use();
				t[4].use();
				cout << *this;
			}
			else {
				cout << "재료가 부족합니다~~" << endl;
				cout << *this;
			}
			break;
		}
	}
}

int main() {
	cout.setf(ios::left);
	CoffeeMachine CM;
	CM.run();
}