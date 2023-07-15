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
중복 원소 없이 오름차순으로 정렬이 된 배열에서 [M] 과 동일한
두 배열의 값 (S = v[L] + v[R]) 의 갯수를 구하는 문제이다.
=========================================================
[예제 1]
10
0 1 2 3 4 5 6 7 8 9

*/
