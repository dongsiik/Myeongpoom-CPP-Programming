#ifndef RAM_H
#define RAM_H

class Ram {
private:
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int adress);
	void write(int address, char value);
};

#endif