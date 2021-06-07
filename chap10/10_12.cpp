#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class EnKr {
private:
	string En;
	string Kr;
public:
	string getEn() { return En; };
	string getKr() { return Kr; };
	void setEn(string En) { this->En = En; }
	void setKr(string Kr) { this->Kr = Kr; }
	void set(string En, string Kr) { setEn(En); setKr(Kr); }
};

int main() {
	vector<EnKr> v;
	EnKr e;
	e.set("honey", "애인");
	v.push_back(e);
	e.set("doll", "인형");
	v.push_back(e);
	e.set("stock", "주식");
	v.push_back(e);
	e.set("picture", "사진");
	v.push_back(e);
	e.set("bear", "곰");
	v.push_back(e);
	e.set("self", "자기");
	v.push_back(e);
	e.set("painting", "그림");
	v.push_back(e);

	srand((unsigned int)time(0));
	cout << "***** 영어 어휘 테스트를 시작합니다. *****\n";
	int input;
	string Einput;
	string Kinput;
	int bogi[4] = { -1,-1,-1,-1 };
	bool dupChk;

	while (true) {
		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료: 그외키 >>";
		cin >> input;
		if (input < 1 || input>2) break;
		else if (input == 1) {
			cout << "영어 단위에 exit을 입력하면 입력 끝" << endl;
			cin.ignore();
			while (true) {
				cout << "영어 >>";
				getline(cin, Einput);
				if (Einput == "exit") break;
				cout << "한글 >>";
				getline(cin, Kinput);
				e.set(Einput, Kinput);
				v.push_back(e);
			}
		}
		else {
			cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료." << endl;
			while (true) {
				for (int i = 0; i < 4; i++) {
					dupChk = false;
					while (!dupChk) {
						dupChk = true;
						bogi[i] = rand() % v.size();
						for (int j = 0; j < i; j++) {
							if (bogi[j] == bogi[i]) {
								dupChk = false; break;
							}
						}
					}
				}
				int n = rand() % 4;
				cout << v[bogi[n]].getEn() << "?" << endl;
				cout << "(1) " << v[bogi[0]].getKr() << " (2) " << v[bogi[1]].getKr() << " (3) " << v[bogi[2]].getKr() << " (4) " << v[bogi[3]].getKr() << " :>";
				cin >> input;
				if (input == (n + 1)) cout << "Excellent !!" << endl;
				else if (input >= 1 && input <= 4) cout << "No. !!" << endl;
				else break;
			}
		}
		cout << endl;
	}

}