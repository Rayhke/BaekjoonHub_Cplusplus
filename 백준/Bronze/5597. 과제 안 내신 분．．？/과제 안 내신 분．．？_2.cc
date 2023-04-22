#include <iostream>
using namespace std;

int main() {
	int a, b[30] = { 0 }, c, d = 0;
	int e[30] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	for (int n = 0; n < 28; n++) {
		cin >> a; c = a - 1;
		if (a == e[c]) { b[c] = e[c]; }
	}
	for (int n = 0; n < 30; n++) {
		if (b[n] == 0) { 
			cout << (n + 1) << " "; d++;
			if (d == 2) { break; }
		}
	}
	return 0;
}
/* ■ 설명 ■
이 코드도 작동엔 문제가 없으나 최적화가 잘되었다곤 못 말하겠다...
*/
