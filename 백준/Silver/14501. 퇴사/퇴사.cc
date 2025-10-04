#include <iostream>
using namespace std;
using PAIR = pair<int, int>;

PAIR Job[15];
int DP[16];

int main() {
	int N, T, P; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> T >> P; Job[n] = { T,P };
	}
	for (int n = 0; n < N; n++) {
		T = Job[n].first + n;
		P = Job[n].second;
		if (n > 0) {
			DP[n] = max(DP[n - 1], DP[n]);
		}
		if (T < N + 1) {
			DP[T] = max(DP[n] + P, DP[T]);
		}
	}
	cout << max(DP[N - 1], DP[N]);
	return 0;
}
