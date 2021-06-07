#include <iostream>
using namespace std;

istream& pos(istream& ins) {
	cout << "À§Ä¡´Â? ";
	return ins;
}

int main() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}