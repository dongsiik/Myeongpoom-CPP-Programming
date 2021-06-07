#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
}

Words::~Words() {
	fin.close();
}

void Words::run() {
	cout << "검색을 시작합니다. 단어를 입력해주세요." << endl;
	while (true) {
		bool chk = false;
		string s;
		cout << "단어>> ";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = 0; i < wordVector.size(); i++) {
			if (s.length() == wordVector[i].length()) {
				int count = 0;
				for (int j = 0; j < s.length(); j++) {
					count += (int)(s[j] != wordVector[i][j]);
				}
				if (count == 1) {
					chk = true;
					cout << wordVector[i] << endl;
				}
			}
		}
		if (chk == false) cout << "단어 없음" << endl;
	}
}

int main() {
	Words w;
	w.run();
}