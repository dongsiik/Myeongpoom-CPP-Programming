#include <iostream>
using namespace std;
//스택이 텅 비었을 때 pop하는 경우, 가득 찼을 때 push하는 경우는 고려하지 않았음.
class Stack {
	int* data;
	int idx;
public:
	Stack() { data = new int[100]; idx = 0; }
	Stack(const Stack& source) {
		this->idx = source.idx;
		for (int i = 0; i < idx; i++) this->data[idx] = source.data[idx];
	}
	~Stack() { delete[] data; }
	bool operator !() {
		if (idx == 0) return true;
		else return false;
	}
	Stack& operator<<(int x) {
		if (this->idx != 100) {
			this->data[idx] = x;
			this->idx++;
		}
		return *this;
	}
	Stack& operator>>(int& x) {
		if (this->idx != 0) {
			this->idx--;
			x = this->data[idx];
		}
		return *this;
	}
};
int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}