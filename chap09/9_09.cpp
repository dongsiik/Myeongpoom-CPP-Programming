#include <iostream>
using namespace std;

class Printer {
protected:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount; printedCount = 0;
	}
	virtual void print(int pages) {
		if (availableCount < pages) cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		else {
			cout << "프린트하였습니다." << endl;
			availableCount -= pages;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장"<< endl;
	}
};

class InkJetPrinter :public Printer {
protected:
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	virtual void print(int pages) {
		if (availableInk < pages) cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
		else {
			if (availableCount >= pages) {
				cout << "프린트하였습니다." << endl;
				availableCount -= pages;
				availableInk -= pages;
			}
			else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장, 남은 잉크 "<<availableInk << endl;
	}
};

class LaserPrinter :public Printer {
private:
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner)
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	virtual void print(int pages) {
		if (availableToner < 1) cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		else {
			if (availableCount>=pages) {
				cout << "프린트하였습니다." << endl;
				availableCount -= pages;
				availableToner -= 1;
				cout << availableToner;
			}
			else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;;
		}
	}
	virtual void show() {
		cout << model << " ," << manufacturer << " ,남은 종이 " << availableCount << "장, 남은 토너 " << availableToner << endl;
	}
};

int main() {
	int pChoice, pages;
	char conti;
	Printer* p[2];
	p[0]=new InkJetPrinter("Officejet V40", "HP", 5, 10);
	p[1]=new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	p[0]->show();
	cout << "레이저 : ";
	p[1]->show();
	cout << endl;

	while (true) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> pChoice >> pages;
		p[pChoice - 1]->print(pages);
		p[0]->show();
		p[1]->show();
		cout << "계속 프린트하시겠습니까(y/n)>>";
		cin >> conti;
		cout << endl;
		if (conti == 'n') break;
	}
	delete p[0];
	delete p[1];
}