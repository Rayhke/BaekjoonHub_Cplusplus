#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define PR pair<int, int>
using namespace std;

int N, M, P = 1, W[1001];	// W : 지나온 경로 저장
PR w[1001];			// w.first : 진입차수	// w.second : 누적 비용
vector <PR> v[1001];		// v.first : 가중치	// v.second : 목적지 노드
queue <PR> q;
stack <int> s;

void V() {
	while (!q.empty()) {
		int X = q.front().second, Q = q.front().first; q.pop();
		if (w[X].second > Q) { continue; }
		for (const auto& n : v[X]) {
			if (w[n.second].second < w[X].second + n.first) {
				w[n.second].second = w[X].second + n.first; W[n.second] = X;
			}
			if (--w[n.second].first == 0) {
				q.push({ w[n.second].second,n.second });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N >> M;
	while (M--) {
		cin >> x >> y >> z; w[y].first++;
		v[x].push_back({ z,y });
	}
	w[P].first = 0; s.push(P); q.push({ 0,P }); V();
	cout << w[1].second << '\n';
	while (1) {
		s.push(W[P]);
		if (W[P] == 1) { break; }
		P = W[P];
	}
	while (!s.empty()) {
		cout << s.top() << ' '; s.pop();
	}
	return 0;
}
