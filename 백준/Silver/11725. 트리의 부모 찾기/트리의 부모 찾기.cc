#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[100001];
int w[100001];
bool r[100001];

void B(int n) {
	queue <int> q; q.push(n);
	r[n] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; q.push(Y); w[Y] = X; }
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, x, y; cin >> N;
	for (int n = 0; n < N - 1; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	B(1);
	for (int n = 2; n <= N; n++) { cout << w[n] << '\n'; }
	return 0;
}