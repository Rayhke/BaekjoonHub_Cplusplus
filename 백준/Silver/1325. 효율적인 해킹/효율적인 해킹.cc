#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[10001];
int w[10001], W = 0;
bool r[10001];

void V(int S) {
	int P = 0; queue <int> q; q.push(S); r[S] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; P++; q.push(Y); }
		}
	}
	w[S] = P;
	W = (P > W) ? P : W;
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, x, y; cin >> N >> M;
	for (int n = 0; n < M; n++) { cin >> y >> x; v[x].push_back(y); }
	for (int n = 1; n <= N; n++) { V(n); fill(r, r + 10002, 0); }
	for (int n = 1; n <= N; n++) { if (w[n] < W) { continue; } cout << n << ' '; }
	return 0;
}
/* ■ 설명 ■
[오답 원인]
bool R = !R 으로 반전 시키며 쓰기엔,
만약 방문 못한 노드들은 결과값을 반전 시키지 못한 채 다음
루트 노드를 탐색 해버리면, 결과가 에러가 날 것이다.
*/
