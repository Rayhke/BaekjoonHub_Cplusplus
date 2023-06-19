#include <iostream>
using namespace std;

inline int s(int N) {
	if (N % 6 != 0) { return 1; }
	return 0;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[50][2] = {}, b = 1000, c = 1000, d, N, M;
	cin >> N >> M;
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < 2; m++) {
			cin >> a[n][m];
		}
	}
	for (int n = 0; n < M; n++) {
		b = (a[n][0] < b) ? a[n][0] : b;
		c = (a[n][1] < c) ? a[n][1] : c;
	}
	if (s(N)) {
		M = 0;
		do {
			if (N > 5) { M += (b < (c * 6)) ? b : (c * 6); N -= 6; }
			else { M += (b < (c* N)) ? b : (c * N); N = 0; }
		} while (N);
		cout << M;
	}
	else {
		M = (b * (N / 6) < c * N) ? (b * (N / 6)) : (c * N);
		cout << M;
	}
	return 0;
}