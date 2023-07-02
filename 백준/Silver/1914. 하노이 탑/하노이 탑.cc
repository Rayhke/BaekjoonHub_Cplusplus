#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void p(int a, char b, char c, char d) {
	if (a < 1) { return; }
	else {
		p(a - 1, b, d, c);
		cout << b << ' ' << c << '\n';
		p(a - 1, d, c, b);
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	string s;
	s = to_string(pow(2, a));
	for (int n = 0; s[n] != '.'; n++) {
		if (s[n + 1] == '.') {
			s = s[n];
			cout << stoi(s) - 1 << '\n';
			break;
		}
		else { cout << s[n]; }
	}
	if (a < 21) { p(a, '1', '3', '2'); }
	return 0;
}
/* ■ 설명 ■
문제를 어떤 방식으로 풀어야 될지 힌트가 필요 하다면
그 때 만큼은 문제의 태그를 확인하여, 풀으는 방법을 유추할 것.
*/
