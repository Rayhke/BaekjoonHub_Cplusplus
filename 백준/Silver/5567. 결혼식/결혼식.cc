#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[501];
short w[501];
bool r[501];

void B() {
	queue <int> q; q.push(1); r[1] = 1; w[1] = 0;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; w[Y] = w[X] + 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, P = 0, x, y; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); } B();
	for (int n = 2; n <= N; n++) { if (r[n] && w[n] < 3) { P++; } }
	cout << P;
	return 0;
}
/* ■ 설명 ■
[오답 원인]
문제의 설명에 함정이 존재하는 데
루트 정점과 무조건 연결 되어 있다고, 카운트를 세는 것이 아니라.
레벨 (깊이) 의 조건이 존재한다.
*/
