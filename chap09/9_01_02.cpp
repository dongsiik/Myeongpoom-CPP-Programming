//같은 Converter class를 상속받아 사용하는 1,2번을 한 파일에 작성하였음.

#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollor :public Converter {
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return "원"; }
	virtual string getDestString() { return "달러"; }
public:
	WonToDollor(double ratio) :Converter(ratio) {}
};

class KmToMile :public Converter {
protected:
	virtual double convert(double src) { return src / ratio; }
	virtual string getSourceString() { return "Km"; }
	virtual string getDestString() { return "Mile"; }
public:
	KmToMile(double ratio) :Converter(ratio) {}
};

/* 문제 1번의 main 함수
int main() {
	WonToDollor wd(1010);
	wd.run();
} */

// 문제 2번의 main 함수
int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}