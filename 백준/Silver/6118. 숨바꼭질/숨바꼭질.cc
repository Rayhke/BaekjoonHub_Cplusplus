#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[20001];
int w[20001];
bool r[20001];

void B() {
	queue <int> q; q.push(1); w[1] = 0; r[1] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; w[Y] = w[X] + 1; q.push(Y); }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, x, y, P = 0, Q = 0, R = 0; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); } B();
	for (int n = 1; n <= N; n++) {
		if (Q < w[n]) { P = n; Q = w[n]; R = 1; }
		else if (Q == w[n]) { R++; }
	}
	cout << P << ' ' << Q << ' ' << R;
	return 0;
}