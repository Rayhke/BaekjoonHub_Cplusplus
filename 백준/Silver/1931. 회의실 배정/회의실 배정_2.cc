#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M = 0, P = 1; cin >> N;
	vector <pair<int, int>> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n].second >> v[n].first; }
	sort(v.begin(), v.end());
	for (int n = 1; n < N; n++) {
		if (v[M].first <= v[n].second) { P++; M = n; }
	}
	cout << P;
	return 0;
}
