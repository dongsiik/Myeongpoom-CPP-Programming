#ifndef BOX_H
#define BOX_H

class Box {
private:
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setfill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif