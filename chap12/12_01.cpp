#include <iostream>
#include <fstream>
using namespace std;


int main() {
	ifstream fin("C:\\temp\\test.txt");
	if (!fin) {
		cout << "파일 열기 실패\n";
		return 0;
	}

	int ch;
	while ((ch = fin.get() )!= EOF) {
		cout << (char)ch;
	}
	fin.close();
}