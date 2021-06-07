#include <iostream>
using namespace std;

class Oval {
private:
	int width;
	int height;
public:
	Oval();
	Oval(int width, int height);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval() :Oval(1, 1) {}
Oval::Oval(int width, int height) { this->width = width; this->height = height; }
Oval::~Oval() {	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;}
int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }
void Oval::set(int w, int h) { width = w; height = h; }
void Oval::show() { cout <<"width = "<< width << ", height = "<< height << endl; }

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
	return 0;
}