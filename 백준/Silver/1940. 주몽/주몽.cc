#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M, V, L = 0, P = 0; cin >> N >> M;
	vector <int> v(N);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = N - 1; n > L; n--) {
		for (int m = L; m < n; m++) {
			V = v[n] + v[m];
			if (V < M) { continue; }
			else if (V == M) { L = m + 1; P++; break; }
			else { L = m; break; }
		}
	}
	cout << P;
	return 0;
}