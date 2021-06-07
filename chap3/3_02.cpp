#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day) { this->year = year; this->month = month; this->day = day; }
	Date(string serial);
	void show() { cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl; }
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

Date::Date(string serial) {
	int i = 0, j = 0;
	for (i = 0; i < serial.length(); i++) {
		if (serial[i] == '/') break;
	}
	for (j = i+1; j < serial.length(); j++) {
		if (serial[j] == '/') break;
	}
	year = stoi(serial.substr(0, i));
	month = stoi(serial.substr(i + 1, j - i - 1));
	day = stoi(serial.substr(j + 1));
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
	return 0;
}