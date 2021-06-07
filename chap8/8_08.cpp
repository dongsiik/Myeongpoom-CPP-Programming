#include <iostream>
using namespace std;

class Printer {
private:
	string model, manufacturer;
	int printedCount, availableCount;
public:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount; printedCount = 0;
	}
	bool print(int pages) {
		if (availableCount < pages) return false;
		else {
			availableCount -= pages; return true;
		}
	}
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getAvailableCount() { return availableCount; }
};

class inkJetPrinter :public Printer {
private:
	int availableInk;
public:
	inkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
		:Printer(model,manufacturer,availableCount){
		this->availableInk = availableInk;
	}
	void printInkJet(int pages) {
		if (availableInk < pages) cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
		else {
			if (print(pages)) {
				cout << "프린트하였습니다." << endl;
				availableInk -= pages;
			}
			else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount()<<"장 ,남은 잉크 " << availableInk << endl; }
};

class laserPrinter :public Printer {
private:
	int availableToner;
public:
	laserPrinter(string model, string manufacturer, int availableCount, int availableToner)
		:Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void printLaser(int pages) {
		if (availableToner < 1) cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		else {
			if (print(pages)) {
				cout << "프린트하였습니다." << endl;
				availableToner--;
			}
			else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;;
		}
	}
	void show() {
		cout << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount() << "장 ,남은 토너 " << availableToner << endl;
	}
};

int main() {
	int pChoice, pages;
	char conti;

	inkJetPrinter* ink = new inkJetPrinter("Officejet V40", "HP", 5, 10);
	laserPrinter* laser = new laserPrinter("SCX-6x45", "삼성전자", 3, 20);
	
	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout<<"잉크젯 : ";
	ink->show();
	cout<<"레이저 : ";
	laser->show();
	cout << endl;

	while (true) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> pChoice >> pages;
		if (pChoice == 1) ink->printInkJet(pages);
		else laser->printLaser(pages);
		ink->show();
		laser->show();
		cout << "계속 프린트하시겠습니까(y/n)>>";
		cin >> conti;
		if (conti == 'n') break;
	}

	delete ink;
	delete laser;
}