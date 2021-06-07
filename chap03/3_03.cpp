#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	int id;
	int money;
	string owner;
public:
	Account(string owner, int id, int money) { this->owner = owner; this->id = id; this->money = money; }
	void deposit(int money) { this->money += money; }
	int withdraw(int money);
	string getOwner() { return owner; }
	int inquiry() { return money; }
};

int Account::withdraw(int money) {
	if (this->money - money < 0) {
		money = this->money;
		this->money = 0;
		return money;
	}
	else {
		this->money -= money;
		return money;
	}
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	return 0;
}