#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int V, E, v[10001];
priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

int find(int n) {
	if (n != v[n]) { v[n] = find(v[n]); }
	return v[n];
}

void L(int n, int m) {
	int N = find(n), M = find(m);
	v[M] = N;
}

void W() {
	int P = 0;
	while (!pq.empty()) {
		int X = pq.top().second.first, Y = pq.top().second.second, Z = pq.top().first; pq.pop();
		if (find(X) != find(Y)) {
			L(X, Y); P += Z;
		}
	}
	cout << P;
}

int main() {
	ios::sync_with_stdio(false);
	int x, y, z; cin >> V >> E;
	for (int n = 1; n <= V; n++) { v[n] = n; }
	for (int n = 0; n < E; n++) {
		cin >> x >> y >> z;
		pq.push({ z,{x,y} });
	}
	W();
	return 0;
}