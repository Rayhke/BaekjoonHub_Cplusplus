#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (1 <= n <= 100) {
		for (int a = 0; a < n; a++) {
			for (int b = 0; b <= a; b++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
	else {
		cout << "범위를 확인 후에, 다시 입력해 주세요.";
	}
	return 0;
}