#include <iostream>
#include <string>
using namespace std;

class Board {
	static string content[100];
	static int num;
public:
	static void print();
	static void add(string c);
};

string Board::content[100];
int Board::num = 0;

void Board::print() {
	cout << "***** 게시판입니다. *****" << endl;
	for (int i = 0; i < num; i++) cout << i << ": " << content[i] << endl;
	cout << endl;
}

void Board::add(string c) {
	content[num] = c;
	num++;
}

int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}