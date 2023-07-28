#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[101];
int w[101][101], Sum[101];
bool r[101], R = 0;

void B(int m,int N) {
	queue <int> q; q.push(m); w[m][m] = 0; r[m] = !R;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (r[Y] == R) { r[Y] = !R; w[m][Y] = w[m][X] + 1; q.push(Y); }
		}
	}
	for (int n = 1; n <= N; n++) { Sum[m] += w[m][n]; }
}

int main() {
	int N, M, P = 300, x, y; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	for (int n = 1; n <= N; n++) { B(n, N); R = !R; }
	for (int n = 1; n <= N; n++) {
		if (P > Sum[n]) { P = Sum[n]; x = n; }
	}
	cout << x;
	return 0;
}
/* ■ 설명 ■
BFS 방식으로 풀었으며,
[오답 원인]
31번 줄에 깊이를 측정하는 동시에 값 비교 연산을 한 것과, 12번 줄이 문제인 듯 함.
*/
