#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int value;
public:
	Integer(int value) { this->value = value; }
	Integer(string value) { this->value = stoi(value); }
	void set(int value) { this->value = value; }
	int get() { return value; }
	int isEven() {return (value + 1) % 2;}
};
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven() << ' ';

	return 0;
}