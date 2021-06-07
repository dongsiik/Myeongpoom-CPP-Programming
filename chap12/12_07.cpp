#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini",ios::in | ios::binary);
	if (!fin) {
		cout << "ini 파일 열기 실패" << endl;
		return 0;
	}

	ofstream fout("C:\\temp\\system.txt", ios::out | ios::binary);
	if (!fout) {
		cout << "txt 파일 열기 실패" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	for (int i = 0; i < length; i++) {
		fin.seekg(length - 1 - i, ios::beg);
		int ch = fin.get();
		fout.put(ch);
	}

	fin.close();
	fout.close();
}