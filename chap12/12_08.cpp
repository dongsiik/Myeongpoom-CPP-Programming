#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << "ini 파일 열기 실패" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	int para = 0;
	int ch;
	cout.setf(ios::left);

	for (para = 0; para < length; para += 16) {
		fin.seekg(para, ios::beg);
		for (int i = 0; (i < 16) && (para + i < length); i++) {
			ch = fin.get();
			cout << setw(3) << hex << ch;
			if (i == 7 || i == 15) cout << setw(3)<<' ';
		}

		fin.seekg(para, ios::beg);
		for (int i = 0; (i < 16) && (para + i < length); i++) {
			ch = fin.get();
			if (isprint(ch) == 0) cout << setw(3) << '.';
			else cout << (char)ch << setw(3);
			if (i == 7) cout << setw(3) << ' ';
			if (i == 15) cout << '\n';
		}
	}

	fin.close();
}