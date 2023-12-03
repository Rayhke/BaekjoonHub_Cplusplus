#include <iostream>
#include <vector>
#include <queue>
using namespace std;

short W[1001];
int w[1001];
vector <int> v[1001];
queue <pair<int, int>> q;

void V() {
	while (!q.empty()) {
		int X = q.front().second, Q = q.front().first; q.pop(); W[X] = Q;
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { q.push({ W[X] + 1,n }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, x, y; cin >> N >> M;
	while (M--) {
		cin >> x >> y;
		w[y]++; v[x].push_back(y);
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { q.push({ 1,n }); }
	}
	V();
	for (int n = 1; n <= N; n++) { cout << W[n] << ' '; }
	return 0;
}