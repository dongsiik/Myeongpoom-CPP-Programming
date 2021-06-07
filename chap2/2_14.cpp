#include <iostream>
using namespace std;

int main() {
	string coffee[3] = { "에스프레소","아메리카노","카푸치노" };
	int price[3] = { 2000, 2300, 2500 };
	string cof;
	int num;
	int sum = 0;

	cout << coffee[0] << ' ' << price[0] << "원, " << coffee[1] << ' ' << price[1] << "원, " << coffee[2] << ' ' << price[2] << "원입니다.\n";
	while (sum<20000) {
		cout << "주문>>";
		cin >> cof >> num;
		for (int i = 0; i < 3; i++) {
			if (coffee[i] == cof) {
				sum += price[i] * num;
				cout << price[i] * num << "원입니다. 맛있게 드세요" << endl;
			}
			else {
				cout << "주문하신 커피 종류를 다시 한 번 확인해주세요" << endl;
			}
		}
	}
	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다.내일 봐요~~~" << endl;
	return 0;
}