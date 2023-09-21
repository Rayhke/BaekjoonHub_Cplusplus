#include <iostream>
#include <vector>
#include <queue>
using namespace std;

short N, M, PX[] = { 1,-1,0,0 }, PY[] = { 0,0,1,-1 };
int P = 0;
vector <vector<short>> v(8, vector<short>(8, 0));
vector <pair<short, short>> w,r;

void V() {
	int Q = 0;
	vector <vector<bool>> R(8, vector<bool>(8, 1));
	queue <pair<short, short>> q;
	for (const auto& n : r) {
		R[n.first][n.second] = 0;
		q.push({ n.first,n.second });
	}
	while (!q.empty()) {
		int x = q.front().second, y = q.front().first; q.pop();
		for (int n = 0; n < 4; n++) {
			int X = x + PX[n], Y = y + PY[n];
			if (X < 0 || M <= X || Y < 0 || N <= Y) { continue; }
			if (v[Y][X] == 0 && R[Y][X]) {
				R[Y][X] = 0; q.push({ Y,X });
			}
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (R[n][m] && v[n][m] == 0) { Q++; }
		}
	}
	P = max(P, Q);
}

void W(int L, int O) {
	if (O == 3) { V(); return; }
	for (int n = L; n < w.size(); n++) {
		int x = w[n].second, y = w[n].first;
		if (v[y][x] == 0) {
			v[y][x] = 1;
			W(n + 1, O + 1);
			v[y][x] = 0;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> v[n][m];
			if (v[n][m] == 0) { w.push_back({ n,m }); }
			else if (v[n][m] == 2) { r.push_back({ n,m }); }
		}
	}
	W(0, 0);
	cout << P;
	return 0;
}
/* ■ 설명 ■
이 문제는 벽 3개를 적절한 위치에 배치하여
바이러스가 감염되지 않은 칸을 최대한 만드는 것이 관건이다.

그렇다면, 벽을 세울 수 있는 2차원 배열 위치 값들만 모아서
백트래킹 형태의 재귀 방식으로 벽을 세울 수 있는 모든 경우의 수를
탐색하여, 만약 벽을 세울 공간이 3곳이 지정 되었다면

BFS(너비 우선 탐색) 알고리즘으로
바이러스가 벽(이나 맵 끝)을 만나기 전까진 모두 탐색한 후에
바이러스가 탐색하지 못했으며, 동시에 벽이 없는 칸들만 카운트 한 후

이러한 절차를 반복하며, 가장 높은 카운트(감염되지 않은 공간의) 수가
큰 값을 출력하면 된다.
*/
