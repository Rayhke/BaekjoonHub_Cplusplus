#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[100001];
int w[100001];
bool r[100001];

void B(int R) {
	queue <int> q; q.push(R);
	r[R] = 1; w[R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) {
				r[Y] = 1; w[Y] = w[X] + 1; q.push(Y);
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
	int N, M, R, x, y; cin >> N >> M >> R;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	B(R);
	for (int n = 1; n <= N; n++) { cout << w[n] - 1 << '\n'; }
	return 0;
}