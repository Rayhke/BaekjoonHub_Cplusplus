#include <iostream>
#include <vector>
#include <queue>
#define PAIR pair<int, int>
using namespace std;

bool R[10001][10001];
int N, M, P = 0, w[10001], W[10001];
vector <PAIR> v[10001], s[10001];
queue <int> q;
queue <PAIR> p;

void V() {
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (const auto& n : v[X]) {
			if (W[n.second] < W[X] + n.first) { W[n.second] = W[X] + n.first; }
			if (--w[n.second] == 0) { q.push(n.second); }
		}
	}
}

void S() {
	while (!p.empty()) {
		int X = p.front().second, L = p.front().first; p.pop();
		for (const auto& n : s[X]) {
			if (R[X][n.second] && R[n.second][X]) { continue; }
			R[X][n.second] = 1;
			if (W[n.second] + n.first == L) {
				R[n.second][X] = 1;
				P++; p.push({ L - n.first,n.second });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N >> M;
	while (M--) {
		cin >> x >> y >> z; w[y]++;
		v[x].push_back({ z,y });
		s[y].push_back({ z,x });
	}
	for (int n = 1; n <= N; n++) {
		if (w[n] == 0) { q.push(n); }
	}
	V(); cin >> x >> y;
	M = W[y] - W[x]; p.push({ M,y });
	S();
	cout << M << '\n' << P;
	return 0;
}