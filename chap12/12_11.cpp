#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Words {
private:
	ifstream fin;
	vector<string> wordVector;
public:
	Words();
	~Words();
	void run();
};

Words::Words() {
	fin.open("words.txt");
	if (!fin) {
		cout << "파일 열기 실패" << endl;
		exit(0);
	}
	string line;
	while (getline(fin, line)) {
		wordVector.push_back(line);
	}
	cout << "...words.txt 파일 로딩 완료" << endl;
	srand((unsigned int)time(0));
}

Words::~Words() {
	fin.close();
}

void Words::run() {
	cout << "------------------------------" << endl;
	cout << "지금부터 행맨 게임을 시작합니다." << endl;
	cout << "------------------------------" << endl;

	while (true) {
		int life = 5;
		int p1 = 0;
		int p2 = 0;
		int n = rand() % 25143;
		string tmp = wordVector[n];
		int r1 = rand() % tmp.size();
		int r2 = (r1 + 1 + (rand() % (tmp.size() - 1))) % tmp.size();
		tmp[r1] = '_';
		tmp[r2] = '_';

		while (life > 0) {
			char ans;
			cout << tmp << endl;
			cin >> ans;
			if (ans == wordVector[n][r1] && p1 == 0) {
				tmp[r1] = ans;
				p1 = 1;
			}
			else if (ans == wordVector[n][r2] && p2==0) {
				tmp[r2] = ans;
				p2 = 1;
			}
			else life--;
			if (life == 0) {
				cout << "5번 실패하였습니다." << endl;
				cout << wordVector[n] << endl;
			}
			if (p1+p2 == 2) {
				cout << "성공!" << endl;
				cout << wordVector[n] << endl;
				break;
			}
		}

		char yn;
		cout << "Next(y/n)?";
		cin >> yn;
		if(yn=='n') break;
	}
}

int main() {
	Words w;
	w.run();
}