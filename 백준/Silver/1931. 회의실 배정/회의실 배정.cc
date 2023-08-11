#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector <pair<int, int>> v;
	int N, M = 0, L = 1, P = 1; cin >> N;
	for (int n = 0; n < N; n++) {
		int s, e; cin >> s >> e;
		v.push_back({ e,s });
	}
	sort(v.begin(), v.end());
	if (N > 1) {
		while (L != N) {
			if (v[M].first <= v[L].second) { P++; M = L; L = M + 1; }
			else { L++; }
		}
	}
	cout << P;
	return 0;
}