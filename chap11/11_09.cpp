// 문제의 실행 결과에는 "소녀 시대", "소녀 시대 집" 등 공백이 포함된 문자열을 입력받았음.
// 공백을 입력받는 적절한 방법을 찾지 못해서 입력에는 공백이 없다고 가정하였음.

#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend ostream& operator<<(ostream& outs, Phone & p);
	friend istream& operator>>(istream & ins, Phone & p);
};
ostream& operator<<(ostream& outs, Phone& p) {
	outs << "(" << p.name << "," << p.telnum << "," << p.address << ")";
	return outs;
}

istream& operator>>(istream& ins, Phone& p) {
	cout << "이름:";
	ins >> p.name;
	cout << "전화번호:";
	ins >> p.telnum;
	cout << "주소:";
	ins >> p.address;
	return ins;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}