#include <iostream>
#include <string>
using namespace std;

class Histogram {
private:
	string text;
public:
	Histogram() { this->text = ""; }
	Histogram(string text) { this->text = text; }
	void put(string text) { this->text += text; }
	void putc(char letter) { this->text += letter; }
	void print();
};

void Histogram::print() {
	int alpha[26] = { 0 };
	int total = 0;

	for (int i = 0; i < text.size(); i++) {
		if (isalpha(text[i])) {
			alpha[tolower(text[i]) - 97]++;
			total++;
		}
	}

	cout << text << endl << endl;
	cout << "ÃÑ ¾ËÆÄºª ¼ö " << total << endl << endl;

	for (int i = 0; i < 26; i++){
		cout << 'a' + i << " (" << alpha[i] << ")\t: ";
		for (int j = 0; j < alpha[i]; j++) {
			cout << "*";
		}
		cout<<endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
	return 0;
}