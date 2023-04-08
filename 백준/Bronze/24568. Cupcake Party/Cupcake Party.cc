#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ((((a * 8) + (b * 3)) - 28) > 0) {
		cout << (((a * 8) + (b * 3)) - 28);
	}
	else {
		cout << "0";	// 만약 계산 값이 0보다 작다면, 남는 컵케이크가 없단 뜻이니 0으로 출력
	}
	return 0;
}
