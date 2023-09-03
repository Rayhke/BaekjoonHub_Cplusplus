#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void V(int N, int K) {
	int U = 1e5 + 1, mn = U, mx = 0;
	vector <bool> r(U, 1);
	queue <pair<int, int>> q; q.push({ N,0 });
	while (!q.empty()) {
		int X = q.front().first, P = q.front().second; q.pop(); r[X] = 0;
		if (X == K) {
			if (mn > P) { mn = P; mx = 1; }
			else if (P == mn) { mx++; }
		}
		if (X + 1 < U && r[X + 1]) { q.push({ X + 1,P + 1 }); }
		if (X - 1 > -1 && r[X - 1]) { q.push({ X - 1,P + 1 }); }
		if (X * 2 < U && r[X * 2]) { q.push({ X * 2,P + 1 }); }
	}
	cout << mn << '\n' << mx;
}

int main() {
	int N, K; cin >> N >> K; V(N, K);
	return 0;
}
/* ■ 설명 ■
[오답 원인]
0 에서 2로 가는 방법이 2가지가 존재 하는 데, [0 + 1, (1 + 1 or 1 * 2)] 이와 마찬가지로
0 에서 3으로 가는 방법도 2가지가 존재하나 정상적으로 카운트 되지 않았었음
근본적인 원인, 같은 비용으로 도달할 수 있는 경우에도 queue에 다음 차례로 갈 수 있도록 넣으면 된다.

[반례]	:  [정답]
======================
4 5	:	1
		1
======================
7 0	:	7
		1
======================
0 3	:	3
		2
======================
0 2	:	2
		2
======================
4 9	:	2
		1
======================
*/
