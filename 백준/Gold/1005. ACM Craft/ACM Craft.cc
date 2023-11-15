#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool R[1001];
int N, K, W[1001];
pair <int, int> w[1001];
vector <int> v[1001];
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop(); R[X] = 1;
		for (const auto& n : v[X]) {
			if (W[n] < W[X] + w[n].second) { W[n] = W[X] + w[n].second; }
			if (--w[n].first == 0) { q.push(n); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int T, x, y; cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> N >> K;
		for (int n = 1; n <= N; n++) { cin >> w[n].second; }
		for (int n = 0; n < K; n++) {
			cin >> x >> y; w[y].first++; v[x].push_back(y);
		}
		for (int n = 1; n <= N; n++) {
			if (w[n].first == 0 && !R[n]) { W[n] += w[n].second; q.push(n); V(); }
		}
		cin >> K; cout << W[K] << '\n';
		fill_n(R, N + 1, 0); fill_n(W, N + 1, 0);
		fill_n(w, N + 1, make_pair(0, 0));
		for (int n = 1; n <= N; n++) { v[n] = vector<int>(); }
	}
	return 0;
}