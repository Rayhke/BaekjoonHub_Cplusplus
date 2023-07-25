#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v[100001];
int w[100001];
bool r[100001];
int S = 1;


void D(int R) {
	r[R] = 1; w[R] = S;
	for (int n = 0; n < v[R].size(); n++) {
		if (!r[v[R][n]]) { S++; D(v[R][n]); }
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
	D(R);
	for (int n = 1; n <= N; n++) { cout << w[n] << '\n'; }
	return 0;
}