#include <iostream>
#include <fstream>
using namespace std;
//12_5에서 이 파일을 열었을 때 이 줄이 출력되지 않아야함

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "원본 파일 열기 실패"<<endl;
		return 0;
	}
	ofstream fout("C:\\temp\\system.txt");
	if (!fout) {
		cout << "복사본 파일 열기 실패" << endl;
		return 0;
	}

	int ch = 0;
	while ((ch=fin.get())!=EOF) {
		fout.put((char)toupper(ch));
	}
	fin.close();
	fout.close();
}