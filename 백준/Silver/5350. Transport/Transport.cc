#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s(int N, int K, int w[], int v[]) {
	int Ws, Vs;
	vector<vector<int>> DP(N + 1, vector<int>(K + 1, 0));
	for (int n = 1; n <= N; n++) {
		Ws = w[n - 1]; Vs = v[n - 1];
		for (int m = 1; m <= K; m++) {
			if (m < Ws) { DP[n][m] = DP[n - 1][m]; }
			else { DP[n][m] = max(DP[n - 1][m], DP[n - 1][m - Ws] + Vs); }
		}
	}
	return DP[N][K];
}

int main() {
	int a, N, K, W, V, X; cin >> a;
	int w[10000], v[10000];
	for (int n = 0; n < a; n++) {
		cin >> N >> K;
		for (int n = 0; n < N; n++) {
			cin >> W >> V;
			w[n] = W; v[n] = V;
		}
		X = s(N, K, w, v);
		cout << X << '\n';
	}
	return 0;
}