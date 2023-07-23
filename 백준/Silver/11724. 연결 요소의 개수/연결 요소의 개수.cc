#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[1001];
bool r[1001];

void B(int n) {
	queue <int> q; q.push(n);
	r[n] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, P = 0, x, y; cin >> N >> M;
	if (M != 0) {
		for (int n = 0; n < M; n++) {
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
		for (int n = 1; n <= N; n++) {
			if (!r[n]) { P++; B(n); }
		}
		cout << P;
	}
	else { cout << N; }
	return 0;
}
/* ■ 설명 ■

[오답 원인]

만약 v[n][0] 안에 값이 존재하지 않음에도
B[v[n][0]] 으로 참조 해버리면 쓰레기 값이 담겨 버리므로,
[bool r] 을 역발상으로 뒤집어서, ' 1 ' 인 곳만 방문 하도록 한다.	// 또는 값이 담겨 있는 정점의 위치만

위의 문제가 존재 하지만, 만약 정점의 갯수가 6개가 주어지고
간선이 4개 밖에 안돼서

1 - 2 - 4
3 - 5

즉, 2개만 있는 거 같지만 실제론
연결되지 않은 정점 하나

' 6 ' 까지 포함하여, 총 3개다.
*/
