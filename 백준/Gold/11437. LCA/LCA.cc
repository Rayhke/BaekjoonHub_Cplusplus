#include <iostream>
#include <vector>
#include <queue>
#define US unsigned short
#define Pair pair <US, US>
using namespace std;

US N, M, a, b;
Pair w[50001];
vector <US> v[50001];
queue <Pair> q;

void B() {
	q.push({ 1,0 });
	while (!q.empty()) {
		US X = q.front().first, P = q.front().second; q.pop();
		for (const auto& n : v[X]) {
			if (w[n].first != 0) { continue; }
			w[n].first = X; w[n].second = P + 1; q.push({ n,w[n].second });
		}
	}
	w[1].first = 0; w[1].second = 0;
}

void LCA() {
	if (w[a].second != w[b].second) {
		while (w[a].second > w[b].second) { a = w[a].first; }
		while (w[a].second < w[b].second) { b = w[b].first; }
	}
	if (a == b) { cout << a << '\n'; return; }
	while (1) {
		if (w[a].first == w[b].first) { cout << w[a].first << '\n'; return; }
		a = w[a].first; b = w[b].first;
	}
}

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	US x, y; cin >> N;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	B(); cin >> M;
	for (int m = 0; m < M; m++) { cin >> a >> b; LCA(); }
	return 0;
}