#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, R, U = 1e9, i[101], mx = 0;
vector <pair<int, int>> v[101];

void V(int S) {
	int md = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector <int> w(101, U); w[S] = 0; pq.push({ 0,S });
	while (!pq.empty()) {
		int X = pq.top().second, Q = pq.top().first; pq.pop();
		if (w[X] < Q) { continue; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] <= M) { md += i[n]; }
	}
	mx = max(mx, md);
}

int main() {
	int x, y, z; cin >> N >> M >> R;
	for (int n = 1; n <= N; n++) { cin >> i[n]; }
	for (int n = 0; n < R; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	for (int n = 1; n <= N; n++) { V(n); }
	cout << mx;
	return 0;
}
/* ■ 설명 ■
다익스트라와 플로이드-워셜의 해결법을 도입 후
방문에 누적된 비용이 ' M ' 의 값을 초과 하지 않는 다면
그 노드 위치의 ' i ' 배열의 값을 모두 더 하여
그 중 최댓값을 구하는 간단한 문제임에도

다익스트라와 플로이드-워셜 구현 중 놓친 곳이 많았는 지
오답을 많이 냈다..

따로 다시 공부하길 바란다.
*/
