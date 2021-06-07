#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

int main() {
	Person p[3];
	string name;
	string tel;

	cout << "이름과 전화번호를 입력해주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 " << p[0].getName() << ' ' << p[1].getName() << ' ' << p[2].getName() << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (p[i].getName() == name) {
			cout << "전화 번호는 " << p[i].getTel();
			break;
		}
	}

	return 0;
}