#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int L, W[1001];
pair <int, int> w[1001];
vector <int> v[1001];
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (const auto& n : v[X]) {
			if (W[n] < W[X]) { W[n] = W[X]; w[n].second = 1; }
			else if (W[n] == W[X]) { w[n].second++; }
			if (--w[n].first == 0) {
				if (w[n].second > 1) { W[n]++; }
				L = max(L, W[n]); q.push(n);
			}
		}
	}
}

int main() {
	int T, K, M, P, x, y; cin >> T;
	while (T--) {
		cin >> K >> M >> P;
		fill_n(W, (M + 1), 1); L = 0;
		for (int p = 0; p < P; p++) {
			cin >> x >> y; w[y].first++;
			v[x].push_back(y);
		}
		for (int m = 1; m <= M; m++) {
			if (w[m].first == 0) { q.push(m); }
		}
		V(); fill_n(w, (M + 1), make_pair(0, 0));
		for (int m = 1; m <= M; m++) { v[m] = vector<int>(); }
		cout << K << ' ' << L << '\n';
	}
	return 0;
}