#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int S, N, K, P = 0, X = 0; cin >> N >> K;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = N - 1; n > -1; n--) {
		if (X >= n) { break; }
		for (int m = X; m < n; m++) {
			S = v[n] + v[m];
			if (S <= K) { P++; X = m + 1; break; }
			else if (S > K) { break; }
		}
	}
	cout << P;
	return 0;
}