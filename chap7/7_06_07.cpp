//같은 Matrix 클래스를 이용하는 6번과 7번을 한 파일에 작성하였음.
//6.(2), 7(2)에서 외부 함수로 구현할 연산자 함수는 주석처리하였음.

#include <iostream>
using namespace std;

class Matrix {
	int mem[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {mem[0] = a; mem[1] = b; mem[2] = c; mem[3] = d;}
	void show() { cout << "Matrix = { " << mem[0] << ' ' << mem[1] << ' ' << mem[2] << ' ' << mem[3] << " }\n"; }
	//6.(1)
	Matrix operator +(Matrix& op2) {
		Matrix tmp(this->mem[0] + op2.mem[0], this->mem[1] + op2.mem[1], this->mem[2] + op2.mem[2], this->mem[3] + op2.mem[3]);
		return tmp;
	}
	Matrix& operator +=(Matrix& op2) {
		this->mem[0] += op2.mem[0];
		this->mem[1] += op2.mem[1];
		this->mem[2] += op2.mem[2];
		this->mem[3] += op2.mem[3];
		return *this;
	}
	bool operator ==(Matrix& op2) {
		if (this->mem[0] == op2.mem[0] && this->mem[1] == op2.mem[1] && this->mem[2] == op2.mem[2] && this->mem[3] == op2.mem[3]) return true;
		else return false;
	} 
	//7.(2)
	int* operator >>(int arr[4]) {
		arr[0] = this->mem[0]; arr[1] = this->mem[1]; arr[2] = this->mem[2]; arr[3] = this->mem[3];
		return arr;
	}
	Matrix& operator <<(int arr[4]) {
		this->mem[0] = arr[0]; this->mem[1] = arr[1]; this->mem[2] = arr[2]; this->mem[3] = arr[3];
		return *this;
	}
//	friend Matrix operator +(Matrix& op1, Matrix& op2);		6.(2)
//	friend Matrix& operator +=(Matrix& op1, Matrix& op2);
//	friend bool operator==(Matrix& op1, Matrix& op2);
//	friend int* operator >>(Matrix& op1, int arr[4]);		7.(2)
//	friend Matrix& operator <<(Matrix& op1, int arr[4]);
};
/* 6.(2)
Matrix operator +(Matrix& op1, Matrix& op2) {
	Matrix tmp(op1.mem[0] + op2.mem[0], op1.mem[1] + op2.mem[1], op1.mem[2] + op2.mem[2], op1.mem[3] + op2.mem[3]);
	return tmp;
}
Matrix& operator +=(Matrix& op1, Matrix& op2) {
	op1.mem[0] += op2.mem[0];
	op1.mem[1] += op2.mem[1];
	op1.mem[2] += op2.mem[2];
	op1.mem[3] += op2.mem[3];
	return op1;
}
bool operator==(Matrix& op1, Matrix& op2) {
	if (op1.mem[0] == op2.mem[0] && op1.mem[1] == op2.mem[1] && op1.mem[2] == op2.mem[2] && op1.mem[3] == op2.mem[3]) return true;
	else return false;
} */
/* 7.(2)
int* operator >>(Matrix& op1, int arr[4]) {
	arr[0] = op1.mem[0]; arr[1] = op1.mem[1]; arr[2] = op1.mem[2]; arr[3] = op1.mem[3];
	return arr;
}

Matrix& operator <<(Matrix& op1, int arr[4]) {
	op1.mem[0] = arr[0]; op1.mem[1] = arr[1]; op1.mem[2] = arr[2]; op1.mem[3] = arr[3];
	return op1;
} */

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++)cout << x[i] << ' ';
	cout << endl;
	b.show();
}