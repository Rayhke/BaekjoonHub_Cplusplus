#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	// [28ms] 걸리기 때문에 집어 넣음
	int a, b, c = 0, d = 0, e[100000] = {};					// [28ms] 에서 [8ms] 로 단축 시킴
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b;
		if (b != 0) { e[c] = b; c = c + 1; }
		else {
			if (c > 0) { c = c - 1; }
			e[c] = 0;
		}
	}
	for (int n = 0; n < a; n++) { d = d + e[n]; }
	cout << d;
	return 0;
}
/* ■ 설명 ■
백준 - 실버 4 (10828번, 스택) 문제를 참고할 것.
=====================================================================
스택의 이론을 활용하여 푸는 문제이며,
[b] 가 (0 ≤ b ≤ 1,000,000) 사이의 입력 값을 받으며,
' 0 ' 을 입력 받았다면, [pop(팝)] 을 사용한 것 처럼
스택의 꼭대기에 담겨 있는 값을 출력까진 안하지만 버리는 것은 동일하다.

그래서 '자연수'를 입력 받았다면, [push(푸쉬)] 를 사용한 것과 동일하게
스택의 꼭대기에 값을 담아준다.
*/
