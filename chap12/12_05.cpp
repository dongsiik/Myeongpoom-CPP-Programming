#include <iostream>
#include <fstream>
using namespace std;


int main() {
	ifstream fin("12_04.cpp");
	if (!fin) {
		cout << "파일 열기 실패"<<endl;
		return 0;
	}

	bool CommentChk = false;
	int ch = 0;

	while ((ch = fin.get()) != EOF) {
		if (ch == '/') {
			if (CommentChk == false) CommentChk = true;
			else {
				fin.ignore(100, '\n');
				cout.put('\n');
				CommentChk = false;
			}
		}
		else {
			if (CommentChk == true) {
				cout.put('/');
				CommentChk = false;
			}
			cout.put(ch);
		}
	}
	
	fin.close();
}