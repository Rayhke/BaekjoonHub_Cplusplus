#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b; string s; cin >> a >> s;
	unsigned long long c = 0, d = 1;
	for (int n = 0; n < a; n++) {
		b = s[n] - 96;
		c = (c + (b * d)) % 1234567891;
		d = (d * 31) % 1234567891;
	}
	cout << c;
	return 0;
}
/* ■ 설명 ■
풀어 놓고도 왜 풀리는 지, 문제를 이해를 하지 못하였기에 한번 진득하게 분석하길 바란다.
*/
