#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int a[100][100] = {}, b[100][100] = {}, N, M, K, P = 0;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> a[n][m];
		}
	}
	cin >> M >> K;
	for (int n = 0; n < M; n++) {
		for (int m = 0; m < K; m++) {
			cin >> b[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < K; m++) {
			P = 0;
			for (int l = 0; l < M; l++) {
				P += a[n][l] * b[l][m];
			}
			cout << P << ' ';
		}
		cout << '\n';
	}
	return 0;
}