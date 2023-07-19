#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, L; cin >> N >> M;
	vector <int> v(N);
	vector <bool> r(N, 1);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = 0; n < M; n++) {
		cin >> L;
		if (binary_search(v.begin(), v.end(), L)) {
			r[lower_bound(v.begin(), v.end(), L) - v.begin()] = 0;
		}
	}
	L = 0;
	for (int n = 0; n < N; n++) { if (r[n]) { L++; } }
	cout << L << '\n';
	for (int n = 0; n < N; n++) {
		if (r[n]) { cout << v[n] << ' '; }
	}
	return 0;
}