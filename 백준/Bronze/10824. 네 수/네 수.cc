#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c, d; cin >> a >> b >> c >> d;
	cout << stol(a + b) + stol(c + d);
	return 0;
}
/* ■ 설명 ■
[오답 원인]
꼼수 부리다 시원하게 틀렸다.
a와 c가 입력 받았을 때, b와 d가 얼마가 입력될지 계산 안하고 무턱대고 (a, c) × 100
대입하다 틀림
*/
