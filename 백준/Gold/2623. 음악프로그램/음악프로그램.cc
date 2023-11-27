#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int w[1001];
vector <int> v[1001];
queue <int> p, q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop(); p.push(X);
		for (const auto& n : v[X]) {
			if (--w[n] == 0) { q.push(n); }
		}
	}
}

int main() {
	int N, M, L, Fi, Ne; cin >> N >> M;
	while (M--) {
		cin >> L >> Fi;
		for (int l = 1; l < L; l++) {
			cin >> Ne; w[Ne]++;
			v[Fi].push_back(Ne); Fi = Ne;
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { q.push(n); }
	}
	V();
	if (p.size() == N) {
		while (!p.empty()) { cout << p.front() << '\n'; p.pop(); }
	}
	else { cout << 0; }
}