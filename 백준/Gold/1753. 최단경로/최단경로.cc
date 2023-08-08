#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int U = 1e9;
vector <pair<int, int>> v[20001];

void W(int K, int V) {
	priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> pq;
	vector <int> w(V, U); w[K] = 0;
	pq.push({ 0,K });
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X] < S) { continue; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
	for (int n = 1; n < V; n++) {
		if (w[n] != U) { cout << w[n] << '\n'; }
		else { cout << "INF\n"; }
	}
}

int main() {
	ios::sync_with_stdio(false);
	int V, E, K; cin >> V >> E >> K;
	for (int n = 0; n < E; n++) {
		int x, y, z;
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
	}
	W(K, V + 1);
	return 0;
}