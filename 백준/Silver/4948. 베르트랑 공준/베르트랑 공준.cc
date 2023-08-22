#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector <bool> r(246913, 1);	// r[1] = 0; 을 넣어야 하지만, 이 문제의 특징 덕에 큰 문제는 없을 것이다.
	int N, P = 0;
	for (int n = 2; n * n < 246913; n++) {
		if (r[n]) { for (int m = n * n; m < 246913; m += n) { r[m] = 0; } }
	}
	while (1) {
		cin >> N; if (N == 0) { break; }
		for (int n = N + 1; n < N * 2 + 1; n++) { if (r[n]) { P++; } }
		cout << P << '\n'; P = 0;
	}
	return 0;
}
/* ■ 설명 ■
전형적인 '에라토스테네스의 체' 알고리즘을 이용한 문제이다.
*/
