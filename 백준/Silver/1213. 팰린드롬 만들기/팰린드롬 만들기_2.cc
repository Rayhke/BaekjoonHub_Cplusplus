#include <iostream>
#include <stack>
using namespace std;

stack <char> s;

int main() {
	bool r = 1; char c, d; int R[26] = {}, P = 0; string p;
	cin >> p;
	for (int n = 0; p[n] != '\0'; n++) { R[p[n] - 65]++; }
	if (size(p) & 1) {
		for (int n = 0; n < 26; n++) {
			if (R[n] & 1) { P++; d = n + 65; }
			if (P > 1) { r = 0; break; }
		}
	}
	else {
		for (int n = 0; n < 26; n++) {
			if (R[n] & 1) { r = 0; break; }
		}
	}
	if (r) {
		for (int n = 0; n < 26; n++) {
			if (R[n] != 0) {
				for (int m = 0; m < R[n] / 2; m++) {
					c = n + 65; cout << c;
					s.push(c);
				}
			}
		}
		if (P & 1) { cout << d; }
		while (!s.empty()) { cout << s.top(); s.pop(); }
	}
	else { cout << "I'm Sorry Hansoo"; }
	return 0;
}
/* ■ 설명 ■
스택의 원리를 이용하여 문자열을 뒤집기
*/
