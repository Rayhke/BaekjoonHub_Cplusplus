#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s(int K, int N, vector <int> i, vector <int> t) {
	int V, W;
	vector <vector<int>> DP(K + 1, vector<int>(N + 1, 0));
	for (int n = 1; n <= K; n++) {
		V = i[n - 1]; W = t[n - 1];
		for (int m = 1; m <= N; m++) {
			if (m < W) { DP[n][m] = DP[n - 1][m]; }
			else { DP[n][m] = max(DP[n - 1][m], DP[n - 1][m - W] + V); }
		}
	}
	return DP[K][N];
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, K, I, T; cin >> N >> K;
	vector <int> i(K), t(K);
	for (int n = 0; n < K; n++) {
		cin >> I >> T;
		i[n] = I; t[n] = T;
	}
	cout << s(K, N, i, t);
}
