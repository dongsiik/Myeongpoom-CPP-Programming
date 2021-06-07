#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.\n";
	return 0;
}