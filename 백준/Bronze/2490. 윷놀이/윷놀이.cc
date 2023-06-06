#include <iostream>
using namespace std;

int main() {
	int a, b = 0; char d[3] = {};
	for (int n = 0; n < 3; n++) {
		for (int m = 0; m < 4; m++) { cin >> a; b = b + a; }
		if (b != 4) { d[n] = 68 - b; }
		else { d[n] = 69; }
		b = 0;
	}
	for (int n = 0; n < 3; n++) { cout << d[n] << '\n'; }
	return 0;
}
/* ■ 설명 ■
윷놀이 윷을 배(0), 등(1) 으로 입력을 받아 드릴 때
도(3), 개(2), 걸(1), 윷(0), 모(5) 의 순서대로
A, B, C, D, E 알파벳을 출력 하도록 한다.
*/
