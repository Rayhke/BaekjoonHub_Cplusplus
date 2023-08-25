#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int S, E, U = 1e9;
vector <pair<int, int>> v[5001];

void V(int N) {
	priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> pq;
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
	cout << w[E];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	cin >> S >> E; V(N + 1);
	return 0;
}