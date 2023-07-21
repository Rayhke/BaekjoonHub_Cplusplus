#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[100001];
int w[100001] = { 0, };
bool r[100001] = { 0, };

void B(int R) {
	int S = 1;
	queue <int> q; q.push(R);
	r[R] = 1; w[R] = S;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) {
				S++;
				r[Y] = 1; w[Y] = S;
				q.push(Y);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, R, x, y; cin >> N >> M >> R;
	for (int n = 0; n < M; n++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	B(R);
	for (int n = 1; n <= N; n++) { cout << w[n] << '\n'; }
	return 0;
}