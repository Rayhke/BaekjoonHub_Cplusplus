#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int W[501];
pair <int, int> w[501];
vector <int> v[501];
queue <int> q;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (const auto& n : v[X]) {
			if (W[n] < W[X] + w[n].first) { W[n] = W[X] + w[n].first; }
			if (--w[n].second == 0) { q.push(n); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	short N; int P, X; cin >> N;
	for (int Y = 1; Y <= N; Y++) {
		cin >> P; w[Y].first = P; W[Y] = w[Y].first;
		while (1) {
			cin >> X;
			if (X == -1) { break; }
			w[Y].second++; v[X].push_back(Y);
		}
	}
	for (int n = 1; n <= N; n++) {
		if (w[n].second == 0) { q.push(n); V(); }
	}
	for (int n = 1; n <= N; n++) { cout << W[n] << '\n'; }
	return 0;
}