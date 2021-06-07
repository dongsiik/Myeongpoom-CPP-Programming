#include <iostream>
#include <string>
using namespace std;
//string class를 이용한 11(4)의 풀이만 작성하였음.

class Book {
	string title;
	int price;
public:
	Book(string title, int price) { this->title = title; this->price = price; }
	void set(string title, int price) { this->title = title; this->price = price; }
	void show() { cout << title << ' ' << price << "원" << endl; }
};
int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
	return 0;
}