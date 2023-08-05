#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <pair<int, int>> v[1001];
int w[1001];

void V(int A,int B) {
	priority_queue <pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0,A }); w[A] = 0;
	while (!pq.empty()) {
		int X = pq.top().second, S = pq.top().first; pq.pop();
		if (w[X] < S) { continue; }
		if (X == B) { return; }
		for (const auto& n : v[X]) {
			int Y = n.second, P = n.first;
			if (w[Y] > w[X] + P) { w[Y] = w[X] + P; pq.push({ w[Y],Y }); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int A, B, N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
	}
	for (int n = 1; n <= N; n++) { w[n] = 1000000000; }
	cin >> A >> B; V(A, B);
	cout << w[B];
	return 0;
}
