#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int S, N, M, P = 0, X = 0; cin >> N;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	cin >> M;
	for (int R = N - 1; R > -1; R--) {
		if (X >= R) { break; }
		for (int L = X; L < R; L++) {
			S = v[L] + v[R];
			if (S == M) { P++; X = L + 1; break; }
			else if (S > M) { break; }
		}
	}
	cout << P;
	return 0;
}
/* ■ 설명 ■
'중복' 원소 없이 오름차순으로 정렬이 된 배열에서 [M] 과 동일한
배열의 두 원소의 값 (S = v[L] + v[R]) 의 갯수를 구하는 문제이다.
==============================================================
오름차순으로 정렬된 특성상

◆ [S] 가 [M] 보다 크다면 ◆
[R] 을 [R -= 1]

◆ [S] 와 [M] 의 크기가 동일하다면 ◆
[L] 을 [L += 1], [R] 을 [R -= 1]

◆ [S] 가 [M] 보다 작으면 ◆
[L] 을 [L += 1] 하면 된다.
*/
