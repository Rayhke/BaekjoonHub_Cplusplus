#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, w[32001];
vector <int> v[32001];
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		cout << X << ' ';
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { q.push(n); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	int x, y; cin >> N >> M;
	while (M--) {
		cin >> x >> y; w[y]++; v[x].push_back(y);
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { q.push(n); }
	}
	V();
	return 0;
}