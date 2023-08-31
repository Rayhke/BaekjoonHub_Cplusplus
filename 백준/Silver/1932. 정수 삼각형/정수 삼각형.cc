#include <iostream>
#include <algorithm>
using namespace std;

int V[501][501], W[501][501];

int main() {
	ios::sync_with_stdio(false);
	int N; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m <= n; m++) { cin >> V[n][m]; W[n][m] = V[n][m]; }
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m <= n; m++) {
			if (V[n + 1][m] < V[n][m] + W[n + 1][m]) { V[n + 1][m] = V[n][m] + W[n + 1][m]; }
			if (V[n + 1][m + 1] < V[n][m] + W[n + 1][m + 1]) { V[n + 1][m + 1] = V[n][m] + W[n + 1][m + 1]; }
		}
	}
	sort(V[N - 1], V[N - 1] + N, greater<>());
	cout << V[N - 1][0];
	return 0;
}