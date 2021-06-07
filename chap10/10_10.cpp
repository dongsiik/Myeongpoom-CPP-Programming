#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Nation {
private:
	string nation;
	string capital;
public:
	void setNation(string nation, string capital) { this->nation = nation; this->capital = capital; }
	string getNation() { return nation; }
	string getCapital() { return capital; }
};

int main() {
	vector<Nation> v;
	Nation n;
	n.setNation("미국", "와싱턴");
	v.push_back(n);
	n.setNation("독일", "베를린");
	v.push_back(n);
	n.setNation("대만", "타이페이");
	v.push_back(n);
	n.setNation("영국", "런던");
	v.push_back(n);
	n.setNation("한국", "서울");
	v.push_back(n);
	n.setNation("북조선", "평양");
	v.push_back(n);
	n.setNation("일본", "도쿄");
	v.push_back(n);
	n.setNation("프랑스", "파리");
	v.push_back(n);
	n.setNation("독일", "베를린");
	v.push_back(n);

	bool tf = true;
	int choice = 0;
	string nInput, cInput;
	srand((unsigned int)time(0));

	cout << "***** 나라 수도 맞추기 게임을 시작합니다 *****\n";
	while (tf) {
		bool dupChk = false;
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3>>";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다.\n";
			cout << "나라와 수도를 입력하세요(no no면 입력끝)\n";
			while (true) {
				dupChk = false;
				cout << v.size() + 1 << ">>";
				cin >> nInput >> cInput;
				if (nInput == "no" && cInput == "no") 	break;

				for (int i = 0; i < v.size(); i++) {
					if (v[i].getNation() == nInput) dupChk = true;
				}
				if (dupChk) cout << "already exists !!" << endl;
				else {
					n.setNation(nInput, cInput);
					v.push_back(n);
				}
			}
			break;
		case 2:
			while (true) {
				int n = rand() % v.size();
				cout << v[n].getNation() << "의 수도는?";
				cin >> cInput;
				if (cInput == "exit") break;
				else if (cInput == v[n].getCapital()) cout << "Correct !!" << endl;
				else cout << "NO !!" << endl;
			}
			break;
		case 3:
			tf = false;
			break;
			
		}
	}
}