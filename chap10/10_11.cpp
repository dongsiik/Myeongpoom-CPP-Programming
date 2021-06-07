#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
	int year;
	string name;
	string author;
public:
	int getYear() { return year; }
	string getName() { return name; }
	string getAuthor() { return author; }
	void setYear(int year) { this->year = year; }
	void setName(string name) { this->name = name; }
	void setAuthor(string author) { this->author = author; }
	void show() { cout << year << "년도, " << name <<", "<< author<<endl; }
};

int main() {
	vector<Book> v;
	Book b;
	int year;
	string name, author;

	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>";
		cin >> year;
		cin.ignore();
		if (year == -1) break;
		cout << "책이름>>";
		getline(cin, name);
		cout << "저자>>";
		getline(cin, author);
		b.setYear(year);
		b.setName(name);
		b.setAuthor(author);
		v.push_back(b);
	}

	cout << "총 입고된 책은 " << v.size() << "권 입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	getline(cin, author);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getAuthor() == author) v[i].show();
	}

	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getYear() == year) v[i].show();
	}
}