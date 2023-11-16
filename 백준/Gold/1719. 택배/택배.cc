#include <iostream>
#include <vector>
#include <queue>
#define Pair pair<int, short>
using namespace std;

int N, M, U = 1e9;
Pair w[201];
vector <Pair> v[201];
priority_queue <Pair, vector<Pair>, greater<Pair>> pq;

void V(int S) {
	int x, y;
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X].first < S) { continue; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y].first > w[X].first + P) {
				w[Y].first = w[X].first + P;
				w[Y].second = X;
				pq.push({ w[Y].first, Y });
			}
		}
	}
	for (int n = 1; n <= N; n++) {
		if (n != S) {
			if (w[n].second == S) { cout << n << ' '; }
			else {
				x = w[n].second;
				while (1) {
					y = w[x].second;
					if (y == S) { cout << x << ' '; break; }
					x = y;
				}
			}
		}
		else { cout << "- "; }
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> N >> M;
	for (int m = 0; m < M; m++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	for (int n = 1; n <= N; n++) {
		fill_n(w, (N + 1), make_pair(U, 0));
		w[n].first = 0; pq.push({ 0,n }); V(n);
	}
	return 0;
}