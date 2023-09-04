#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool r[501]; int U = 1e9;
vector <pair<int, int>> v[501];

void V(int N) {
	vector <int> p(501, 0); vector <long long> w(N, U);
	queue <long long> q; q.push(1); p[1]++; w[1] = 0; r[1] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop(); r[X] = 0;
		for (int n = 0; n < v[X].size(); n++) {
			int Y = v[X][n].second, P = v[X][n].first;
			if (w[Y] > w[X] + P) {
				w[Y] = w[X] + P;
				if (!r[Y]) {
					p[Y]++;
					if (p[Y] > N) { cout << -1; return; }
					r[Y] = 1; q.push(Y);
				}
			}
		}
	}
	for (int n = 2; n < N; n++) {
		if (w[n] != U) { cout << w[n] << '\n'; }
		else { cout << -1 << '\n'; }
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, x, y, z; cin >> N >> M;
	for (int n = 0; n < M; n++) {
		cin >> x >> y >> z;
		v[x].push_back({ z,y });
	}
	V(N + 1);
	return 0;
}
/* ■ 설명 ■
SPFA 알고리즘 참조
*/
