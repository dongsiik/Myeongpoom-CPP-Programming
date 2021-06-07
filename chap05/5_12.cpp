#include <iostream>
using namespace std;


class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);
	~Dept() { delete scores; }
	int getSize(){ return size; }
	void read();
	bool isOver60(int index);
};

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[dept.size];
	for (int i = 0; i < dept.size; i++) {
		this->scores[i] = dept.scores[i];
	}
}

void Dept::read() {
	cout << "10개 점수 입력>> ";
		for (int i = 0; i < size; i++) {
			cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60) return true;
	else return false;
}
int countPass(Dept& dept) { //(2)(3) 값에 의한 호출에서 참조에 의한 호출로 바꿨기 때문에 복사 생성자가 필요 없어짐
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}
int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
	return 0;
}