#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, address, age;
	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	getline(cin, age);
	cout << name << ", " << address << ", " << age << "세";

	return 0;
}