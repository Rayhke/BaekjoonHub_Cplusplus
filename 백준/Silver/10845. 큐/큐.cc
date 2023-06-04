#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b, c = -1, d[10000] = {}, e = 0;
	string s;
	cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> s;
		if (s == "push") {	// push(푸쉬)
			cin >> b;	// 스택의 push와 이하 동일하다.
			d[++c] = b;
		}
		else if (s == "pop") {					// pop(팝)
			if (d[0] != 0) {				// 스택의 pop과는 전혀 다르며
				cout << d[0] << '\n'; d[0] = 0;
				if (c > -1) { c = c - 1; }
				e = 0;
				while (e <= c) {
					d[e] = d[e + 1];
					e = e + 1;
				}
			}
			else { cout << -1 << '\n'; }
		}
		else if (s == "size") {
			if (d[0] != 0) { cout << c + 1 << '\n'; }
			else { cout << 0 << '\n'; }
		}
		else if (s == "empty") {
			if (d[0] == 0) { cout << 1 << '\n'; }
			else { cout << 0 << '\n'; }
		}
		else if (s == "front") {
			if (d[0] != 0) { cout << d[0] << '\n'; }
			else { cout << -1 << '\n'; }
		}
		else if (s == "back") {
			if (c > -1 && d[c] != 0) { cout << d[c] << '\n'; }
			else { cout << -1 << '\n'; }
		}
		s = "";
	}
	return 0;
}
/* ■ 설명 ■
백준 - 실버 4 (10828번, 스택) 문제를 참고할 것.
===============================================
대표적인 큐 이론을 배열로 구현화한 것이다.
*/
