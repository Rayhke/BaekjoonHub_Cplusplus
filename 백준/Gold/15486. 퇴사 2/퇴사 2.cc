#include <iostream>
using namespace std;
using PAIR = pair<int, int>;

PAIR Job[1500000];
int DP[1500001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, T, P; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> T >> P; Job[n] = { T,P };
	}
	DP[Job[0].first] = Job[0].second;
	for (int n = 1; n < N; n++) {
		T = Job[n].first + n;
		P = Job[n].second;
		DP[n] = max(DP[n - 1], DP[n]);
		if (T < N + 1) {
			DP[T] = max(DP[n] + P, DP[T]);
		}
	}
	cout << max(DP[N - 1], DP[N]);
	return 0;
}