#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "ini 파일 열기 실패" << endl;
		return 0;
	}

	ofstream fout("C:\\temp\\system.txt");
	if (!fout) {
		cout << "txt 파일 열기 실패" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);
	long length = fin.tellg();
	fin.seekg(0, ios::beg);
	long unitLength = length / 10;

	cout << "복사 시작..." << endl;
	int ch;
	long count = 0;
	int progress = 1;

	while ((ch = fin.get()) != EOF) {
		fout.put(ch);
		count++;
		if (count == unitLength) {
			cout << "." << unitLength << "B " << progress*10 << "%"<< endl;
			count = 0;
			progress++;
		}
	}
	cout << "." << unitLength << "B 100%" << endl;
	cout << length << "B 복사 완료" << endl;
	
	fin.close();
	fout.close();
}