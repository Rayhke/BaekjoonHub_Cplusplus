#include <iostream>
using namespace std;

bool v[128][128], w[128][128]; int P[2];

void S(int x, int y, int M, int N) {
	bool V = v[y][x];
	if (x + M > N || y + M > N) { return; }
	for (int n = y; n < y + M; n++) {
		for (int m = x; m < x + M; m++) { if (v[n][m] != V) { return; } }
	}
	for (int n = y; n < y + M; n++) {
		for (int m = x; m < x + M; m++) { w[n][m] = 1; }
	}
	P[V]++;
}

int main() {
	ios::sync_with_stdio(false);
	int N, M, L = 1; cin >> N; M = N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) { cin >> v[n][m]; }
	}
	while (1) {
		for (int n = 0; n < N / M; n++) {
			for (int m = 0; m < N / M; m++) {
				if (!w[n * M][m * M]) { S(m * M, n * M, M, N); }
			}
		}
		M /= 2; L *= 2;
		if (M == 1) { break; }
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) { if (!w[n][m]) { P[v[n][m]]++; } }
	}
	cout << P[0] << '\n' << P[1];
}