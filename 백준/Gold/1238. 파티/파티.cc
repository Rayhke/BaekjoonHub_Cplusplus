#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int U = 1e9, L = 0;
vector <pair<int, int>> v[1001];

void V(int N, int S, int E) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector <int> w(N, U); w[S] = 0; pq.push({ 0,S });
	while (!pq.empty()) {
		int X = pq.top().second, Q = pq.top().first; pq.pop();
		if (w[X] < Q) { continue; }
		if (X == E) { break; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
	L += w[E];
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, X, P = 0, x, y, z; cin >> N >> M >> X;
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
	}
	for (int n = 1; n <= N; n++) {
		if (n == X) { continue; }
		V(N + 1, n, X); V(N + 1, X, n);
		P = max(P, L); L = 0;
	}
	cout << P;
	return 0;
}