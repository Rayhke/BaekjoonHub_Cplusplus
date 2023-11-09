#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool R[32001];
int N, M;
vector <int> v[32001], w(32001);
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		cout << X << ' '; R[X] = 1;
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { q.push(n); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int x, y; cin >> N >> M;
	for (int m = 0; m < M; m++) {
		cin >> x >> y;
		w[y]++; v[x].push_back(y);
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0 && !R[n]) { q.push(n); V(); }
	}
	return 0;
}