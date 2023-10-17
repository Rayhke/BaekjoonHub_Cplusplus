#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
vector <pair<short, int>> v[1001];

void V(int S, int E) {
	vector <bool> r(1001, 1); r[S] = 0;
	queue <pair<short, int>> q; q.push({ S,0 });
	while (!q.empty()) {
		int X = q.front().first, Q = q.front().second; q.pop();
		if (X == E) { cout << Q << '\n'; return; }
		for (const auto& n : v[X]) {
			int Y = n.first, P = n.second;
			if (r[Y]) { r[Y] = 0; q.push({ Y,P + Q }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N >> M;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ y,z });
		v[y].push_back({ x,z });
	}
	for (int n = 0; n < M; n++) { cin >> x >> y; V(x, y); }
	return 0;
}