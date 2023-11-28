#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, w[32001];
vector <int> v[32001];
priority_queue <int, vector<int>, greater<int>> pq;

void V() {
	while (!pq.empty()) {
		int X = pq.top(); pq.pop();
		cout << X << ' ';
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { pq.push(n); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int x, y; cin >> N >> M;
	while (M--) {
		cin >> x >> y; w[y]++;
		v[x].push_back(y);
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { pq.push(n); }
	}
	V();
	return 0;
}
/* ■ 설명 ■
위상 정렬로 방문하되, 우선순위 큐를 사용하여
노드 번호가 작은 것부터 방문한다.
*/
