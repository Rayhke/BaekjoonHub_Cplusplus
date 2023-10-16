#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, W, D; cin >> N >> M;
	vector <pair<int, int>> v;
	vector <int> w(M + 1, 0);
	for (int n = 0; n < N; n++) {
		cin >> W >> D;
		v.push_back({ W,D });
	}
	for (int n = 0; n < N; n++) {
		for (int m = M; m >= v[n].first; m--) {
			w[m] = max(w[m], w[m - v[n].first] + v[n].second);
		}
	}
	cout << w[M];
	return 0;
}