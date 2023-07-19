#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M; string s; cin >> N >> M;
	vector <string> v(N);
	vector <bool> r(N, 0);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = 0; n < M; n++) {
		cin >> s;
		if (binary_search(v.begin(), v.end(), s)) {
			r[lower_bound(v.begin(), v.end(), s) - v.begin()] = 1;
		}
	}
	M = 0;
	for (int n = 0; n < N; n++) { if (r[n]) { M++; } }
	cout << M << '\n';
	for (int n = 0; n < N; n++) {
		if (r[n]) { cout << v[n] << '\n'; }
	}
	return 0;
}