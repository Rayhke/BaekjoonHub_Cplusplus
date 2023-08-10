#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int U = 1e9, D;
vector <pair<int, int>> v[50001];

void V(int E) {
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> w(E + 1, U); w[1] = 0;
	pq.push({ 0,1 });
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X] < S) { continue; }
		if (X == E) { D = S; return; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int N, M; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		int x, y, z;
		cin >> y >> x >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	V(N);
	cout << D;
	return 0;
}