#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person();
	Person(int id, string name);
	Person(int id, string name, double weight);
//	Person(int id = 1, string name = "Grace", double weight = 20.5); 디폴트 매개변수를 이용하는 (2)의 해답
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person() {
	id = 1;	name = "Grace", weight = 20.5;
}

Person::Person(int id, string name) {
	this->id = id; this->name = name; weight = 20.5;
}

Person::Person(int id, string name, double weight) {
	this->id = id; this->name = name; this->weight = weight;
}
/*	디폴트 매개변수를 이용하는 (2)의 해답
Person::Person(int id, string name, double weight) {
	this->id = id; this->name = name; this->weight = weight;
}
*/
int main() {
	Person grace, ashley(2, "Ashely"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
	return 0;
}