#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[300001];
int w[300001], W = 0;
bool r[300001];

void B(int R,int K) {
	queue <int> q; q.push(R); w[R] = 0; r[R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; w[Y] = w[X] + 1; q.push(Y); if (w[Y] == K) { W++; } }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, K, X, P = 0, x, y; cin >> N >> M >> K >> X;
	for (int n = 0; n < M; n++) { cin >> x >> y; v[x].push_back(y); }
	B(X, K);
	if (W != 0) { for (int n = 1; n <= N; n++) { if (w[n] == K) { cout << n << '\n'; } } }
	else { cout << -1; }
	return 0;
}
/* ■ 설명 ■
[오답 원인]
단방향 그래프이며, 양방향으로 연결하는 것이 아니다.
*/
