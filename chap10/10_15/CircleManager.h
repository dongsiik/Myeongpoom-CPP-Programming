#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H

#include <vector>
#include "Circle.h"
using namespace std;

class CircleManager {
private:
	vector<Circle*> v;
	void insert();;
	void remove();
	void show();
public:
	void run();
};

#endif