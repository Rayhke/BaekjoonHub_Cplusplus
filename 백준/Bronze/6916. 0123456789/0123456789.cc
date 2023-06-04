#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 1 || n == 4) {
		cout << "\n";
		if (n == 1) {
			cout << "      *\n      *\n      *\n";
		}
		else if (n == 4) {
			cout << "*     *\n*     *\n*     *\n * * *";
		}
		cout << "\n      *\n      *\n      *\n";
	}
	else {
		cout << " * * *\n";
		if (n == 0 || n == 8 || n == 9) {
			cout << "*     *\n*     *\n*     *\n";
			if (n != 0) {
				cout << " * * *\n";
				if (n == 8) {
					cout << "*     *\n*     *\n*     *";
				}
				else {
					cout << "      *\n      *\n      *";
				}
				cout << "\n * * *\n";
			}
			else {
				cout << "\n*     *\n*     *\n*     *\n * * *\n";
			}
		}
		else if (n == 5 || n == 6) {
			cout << "*\n*\n*\n * * *\n";
			if (n == 5) {
				cout << "      *\n      *\n      *";
			}
			else {
				cout << "*     *\n*     *\n*     *";
			}
			cout << "\n * * *\n";
		}
		else {
			cout << "      *\n      *\n      *\n";
			if (n != 7) {
				cout << " * * *\n";
				if (n == 2) {
					cout << "*\n*\n*";
				}
				else {
					cout << "      *\n      *\n      *";
				}
				cout << "\n * * *\n";
			}
			else {
				cout << "\n      *\n      *\n      *\n";
			}
		}
	}
	return 0;
}
/* ■ 설명 ■
0 ~ 9 까지의 숫자를 하나를 입력 받아서
입력 받은 숫자를 아날로그 그래픽으로 구현하는 것이다.

그리고 주의 해야될 점은

*/
