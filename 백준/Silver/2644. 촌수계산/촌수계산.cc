#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> v[101];
int w[101];
bool r[101];

void B(int R, int S) {
	queue <int> q; q.push(R); w[R] = 0; r[R] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n];
			if (!r[Y]) { r[Y] = 1; w[Y] = w[X] + 1; q.push(Y); }
		}
	}
	cout << w[S];
}

int main() {
	int N, M, x, y, J, K; cin >> N >> J >> K >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y; w[n + 1] = -1;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int n = 1; n <= N; n++) { sort(v[n].begin(), v[n].end()); }
	B(J, K);
	return 0;
}