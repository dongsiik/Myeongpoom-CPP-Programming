#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	~BaseMemory() { delete[] mem; }
public:
	char read(int idx) { return mem[idx]; }
	void write(int idx, int val) { mem[idx] = val; }
};

class ROM :public BaseMemory {
public:
	ROM(int size, char* text, int length) :BaseMemory(size) {
		for (int i = 0; i < length; i++) write(i, text[i]);
	}
};

class RAM :public BaseMemory {
public:
	RAM(int size) :BaseMemory(size) {}
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosRom(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosRom.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}