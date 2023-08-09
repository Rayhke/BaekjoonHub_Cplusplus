#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, V[41] = { 1,1 }; cin >> N;
	for (int n = 2; n < 41; n++) { V[n] = V[n - 1] + V[n - 2]; }
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M > 1) { cout << V[M - 2] << ' ' << V[M - 1] << '\n'; }
		else if (M & 1) { cout << 0 << ' ' << 1 << '\n'; }
		else { cout << 1 << ' ' << 0 << '\n'; }
	}
	return 0;
}
/* ■ 설명 ■
[M]번 째의 피보나치 수가 만들어지기 위한
[M - 2] 와 [M - 1] 번째 원소를 출력하면 되는 문제이다.

[오답 원인]
index 가 '2' 일 때 기준 범위를 미처 고려하는 것을 실수함. (10번 째 줄)
*/
