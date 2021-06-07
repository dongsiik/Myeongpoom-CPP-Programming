#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << left << setw(15) << "Number" << setw(15) << "Square" << setw(15) << "Square Root" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw(15) << setfill('_') << 5*i ;
		cout << setw(15) << setfill('_') << 25*i*i << setfill('_');
		cout << setprecision(3) << setw(15) << setfill('_') << sqrt(5 * i) << setfill('_') << endl;
	}
}