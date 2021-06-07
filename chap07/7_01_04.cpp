//Book 클래스를 이용하는 1~4를 한 소스파일에 작성하였음.
//1.(2)에서 외부 함수로 구현할 연산자 함수는 주석처리하였음.

#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	Book& operator +=(int price) { this->price += price; return *this; }
	Book& operator -=(int price) { this->price -= price; return *this; }
//	friend Book& operator +=(Book& b, int p);	// 1.(2)
//	friend Book& operator -=(Book& b, int p);	// 1.(2)
	bool operator ==(int price) {
		if (this->price == price) return true;
		else return false;
	}
	bool operator ==(string title) {
		if (this->title == title) return true;
		else return false;
	}
	bool operator ==(Book& op2) {
		if (this->title == op2.title && this->price == op2.price) return true;
		else return false;
	}
	bool operator !() {
		if (this->price == 0) return true;
		else return false;
	}
	friend bool operator <(string op1, Book& op2);
};

// 1.(2)에서 클래스 외부함수로 구현한 연산자 함수
// Book& operator +=(Book& b, int p){ b.price += p; return b; }
// Book& operator -=(Book& b, int p){ b.price -= p; return b; }

bool operator <(string op1, Book& op2) {
	if (op1 < op2.title) return true;
	else return false;
}

int main() {
	//문제 1번
/*	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show(); */

	//문제 2번
/*	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl; */

	//문제 3번
/*	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl; */

	//문제 4번
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}