#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <vector>
#include "Shape.h"
using namespace std;

class GraphicEditor {
private:
	vector<Shape*> v;
	int menu();
	void insert();;
	void remove();
	void show();
public:
	void run();
};

#endif