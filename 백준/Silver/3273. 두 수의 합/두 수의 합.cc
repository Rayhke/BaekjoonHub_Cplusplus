#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int S, N, M, P = 0, X = 0; cin >> N;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	cin >> M;
	for (int R = N - 1; R > -1; R--) {
		if (X >= R) { break; }
		for (int L = X; L < R; L++) {
			S = v[L] + v[R];
			if (S == M) { P++; X = L + 1; break; }
			else if (S > M) { break; }
		}
	}
	cout << P;
	return 0;
}
