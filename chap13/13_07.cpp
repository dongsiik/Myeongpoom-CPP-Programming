#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	try {
		ifstream fsrc(srcFile, ios::in | ios::binary);
		if (!fsrc) throw "원본 파일 열기 오류";
		ofstream fdest(destFile, ios::out | ios::binary);
		if (!fdest) throw "복사본 파일 열기 오류";

		int c;
		while ((c = fsrc.get()) != EOF) {
			fdest.put(c);
		}
		cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
		fsrc.close();
		fdest.close();
	}
	catch (const char* s) {
		cout << "오류 발생 : " << s << endl;
	}

}