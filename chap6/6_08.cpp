#include <iostream>
#include <string>
using namespace std;

class Trace {
private:
	static string tag[100];
	static string content[100];
	static int num;
public:
	static void put(string t, string c) { tag[num] = t; content[num] = c; num++; }
	static void print(string t);
	static void print();
};

string Trace::tag[100];
string Trace::content[100];
int Trace::num = 0;

void Trace::print(string t) {
	cout << "----- " << t << "태그의 Trace 정보를 출력합니다. -----" << endl;
	for (int i = 0; i < num; i++) {
		if (tag[i] == t) cout << tag[i] << ':' << content[i] << endl;
	}
}

void Trace::print() {
	cout << "----- 모든 태그의 Trace 정보를 출력합니다. -----" << endl;
	for (int i = 0; i < num; i++) cout << tag[i] << ':' << content[i] << endl;
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}
int main() {
	Trace::put("main()", "프로그램을 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}