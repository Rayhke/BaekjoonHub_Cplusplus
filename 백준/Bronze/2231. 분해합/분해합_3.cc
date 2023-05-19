#include <iostream>
#include <string>
using namespace std;

int p(int a, int n) {
	string s; int d, e = n;
	s = to_string(n);
	d = size(s);
	for (int m = 0; m < d; m++) { e += (s[m] - '0'); }
	if (e == a) { s = ""; return 1; }
	else { s = ""; return 0; }
}

int main() {
	int a, b = 0, c = 0;
	cin >> a;
	for (int n = 1; n <= a; n++) {
		b = p(a, n);
		if (b) { c = n; break; }
		else { b = 0; }
	}
	if (c) { cout << c << endl; }
	else { cout << 0 << endl; }
	return 0;
}
/* ■ 설명 ■
처음 만들었던 코드인데, 구조가 아주 비효율적이여서
최초 정답 코드와 비교 했을 때, 연산에 걸린 시간이 20 ms 증가 했다. (총, 20 ms 소요)
단순하게 생각하지 말고 많이 생각해서 쓸데 없는 건 쳐내고, 간결하게 만들 수 있는 부분은
최대한 간결하게 만들자.

====================================================================================
오답 원인 - 조건이 성립하는 수가 없을 때, ' 0 ' 이 아닌
' -1 ' 을 출력하게 끔 했기 때문에 계속 틀렸던 것이다.

문제를 잘 읽어보고 침착하게 풀어라.
*/
