#ifndef UI_H
#define UI_H

#include <string>
using namespace std;

class UI {
public:
	static int menuUI();
	static void insertUI(int& radius, string& name);
	static string removeUI();
};

#endif