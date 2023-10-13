#include <iostream>
#include <vector>
using namespace std;

bool r[10001];
int N, M, P = 0;
vector <short> R;
vector <pair<short, int>> v[10001];

void W(int S) {
	if (v[S].size() < 2) { R.push_back(S); } // return; } // 문제가 발생하는 지점
	r[S] = 1;
	for (const auto& n : v[S]) {
		if (!r[n.first]) { W(n.first); }
	}
	r[S] = 0;
}

void V(int S, int C) {
	if (v[S].size() < 2 && S != M) { P = max(P, C); return; }
	r[S] = 1;
	for (const auto& n : v[S]) {
		if (!r[n.first]) { V(n.first, C + n.second); }
	}
	r[S] = 0;
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ y,z });
		v[y].push_back({ x,z });
	}
	W(1);
	for (const auto& n : R) { M = n; V(n, 0); r[M] = 1; }		// 중복 조합의 경우의 수 제거
	cout << P;
	return 0;
}
/* ■ 설명 ■
트리의 형태이며, 트리의 노드 중에 간선 연결이 하나 밖에 없는 상태인		// 루트 노드 or 리프 노드
노드들만 vector R에 모아서, 깊이 우선 탐색(DFS)로 R의 원소들 중 한쌍의
탐색을 진행하여 가장 큰 가중치 값을 찾으면 된다.
=====================================================================
[오답 원인]
아래와 같은 입력 값을 받았을 때, 원래 코드 구조는
루트 노드 또한 간선 연결이 하나만 나오는 경우를 고려하지 않고 단순히
간선 연결 하나면 return 하도록 하였다 보니, 오히려 1 -> 2 로 방문은 커녕
즉시 return 을 하여 종료된 케이스였다.
[반례]
4
1 2 1
2 3 100
2 4 100
*/
