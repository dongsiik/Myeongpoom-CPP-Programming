#include <iostream>
#include <vector>
using namespace std;

double average(vector<int> v) {
	double sum = 0;
	for (int i = 0; i < v.size(); i++) sum += v[i];
	return sum / v.size();
}

int main() {
	vector<int> v;
	int input;

	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> input;
		if (input == 0) break;
		v.push_back(input);
		for (int i = 0; i < v.size(); i++) cout << v[i] << ' ';
		cout << endl;
		cout << "평균 = " << average(v) << endl;
	}
}