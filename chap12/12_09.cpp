#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}
}

int main() {
	vector<string> wordVector;
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "ini 파일 열기 실패" << endl;
		return 0;
	}
	fileRead(wordVector, fin);
	fin.close();

	cout << "C:\\windows\\system.ini 파일 읽기 완료" << endl;
	cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;

	int lineNum = 0;
	while (true) {
		cout << ": ";
		cin >> lineNum;
		if (lineNum < 1) {
			cout << "종료 합니다." << endl;
			break;
		}
		else if(lineNum<=wordVector.size()) cout << wordVector[lineNum - 1] << endl;
	}
}