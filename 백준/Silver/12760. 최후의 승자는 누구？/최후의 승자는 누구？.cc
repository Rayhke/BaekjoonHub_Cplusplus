#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, L, R = 0; cin >> N >> M;
	vector <int> v[100], w(N, 0);
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) { cin >> L; v[n].push_back(L); }
	}
	for (int n = 0; n < N; n++) { sort(v[n].begin(), v[n].end()); }
	for (int m = 0; m < M; m++) {
		int P = 0;
		for (int n = 0; n < N; n++) { P = max(v[n][m], P); }
		for (int n = 0; n < N; n++) { if (v[n][m] == P) { w[n]++; R = max(w[n], R); } }
	}
	for (int n = 0; n < N; n++) { if (w[n] == R) { cout << n + 1 << ' '; } }
	return 0;
}