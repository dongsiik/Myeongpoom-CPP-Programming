#include <iostream>
#include <string>
using namespace std;

void combine(string text1, string text2, string& text3) {
	text3 = text1 + " " + text2;
}
int main() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3;
	return 0;
}