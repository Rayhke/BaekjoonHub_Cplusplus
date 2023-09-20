#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M, R, U = 1e9, i[101], mx = 0;
vector <pair<int, int>> v[101];

void V(int S) {
	int md = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector <int> w(101, U); w[S] = 0; pq.push({ 0,S });
	while (!pq.empty()) {
		int X = pq.top().second, Q = pq.top().first; pq.pop();
		if (w[X] < Q) { continue; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] <= M) { md += i[n]; }
	}
	mx = max(mx, md);
}

int main() {
	int x, y, z; cin >> N >> M >> R;
	for (int n = 1; n <= N; n++) { cin >> i[n]; }
	for (int n = 0; n < R; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
		v[y].push_back({ z,x });
	}
	for (int n = 1; n <= N; n++) { V(n); }
	cout << mx;
	return 0;
}