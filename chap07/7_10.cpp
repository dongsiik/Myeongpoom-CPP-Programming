#include <iostream>
using namespace std;

class Statistics {
	int* data;
	int size;
public:
	Statistics() { data = new int[10]; size = 0; }
	Statistics(const Statistics& source) {
		this->size = source.size;
		data = new int[size];
		for (int i = 0; i < size; i++) {
			this->data[i] = source.data[i];
		}
	}
	~Statistics() { delete[] data; }
	bool operator !() {
		if (size == 0) return true;
		else return false;
	}
	Statistics& operator <<(int x) {
		this->data[size] = x;
		size++;
		return *this;
	}
	void operator >>(int& x) {
		int avg = 0;
		if (size == 0) return;
		else {
			for (int i = 0; i < size; i++) avg += data[i];
			avg /= size;
			x = avg;
		}
	}
	void operator ~() {
		for (int i = 0; i < size; i++) cout << data[i] << ' ';
		cout << endl;
	}
};
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;
	
	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}