#include <iostream>
#include <cstring>
using namespace std;
//a = 97
int main() {
	char buf[10001];
	int alpha[26] = { 0 };
	int total = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ;입니다. 10000개까지 가능합니다.\n";
	cin.getline(buf, 10001, ';');
	for (unsigned int i = 0; i < strlen(buf); i++) {
		if (isalpha(buf[i])) {
			buf[i] = tolower(buf[i]);
			alpha[int(buf[i]-97)]++;
			total++;
		}
	}
	cout << "총 알파벳 수 " << total << "\n\n";

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 97) << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) cout << '*';
		cout << "\n";
	}
	return 0;
}

/*
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some things aren't meant to be ;
*/