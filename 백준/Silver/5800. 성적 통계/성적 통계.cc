#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[100][52] = {}, b, c, K, N;
	cin >> K;
	for (int n = 0; n < K; n++) {
		cin >> N;
		for (int m = 0; m < N; m++) { cin >> a[n][m]; }
		for (int m = 0; m < N - 1; m++) {
			b = m;
			for (int l = m + 1; l < N; l++) {
				if (a[n][b] > a[n][l]) { b = l; }
			}
			c = a[n][m];
			a[n][m] = a[n][b];
			a[n][b] = c;
		}
		a[n][50] = a[n][N - 1];
		for (int m = 1; m < N; m++) {		// N 이 아닌 N - 1 로 범위 미스 조작
			if (a[n][51] < (a[n][m] - a[n][m - 1])) { a[n][51] = a[n][m] - a[n][m - 1]; }
		}
	}
	for (int n = 0; n < K; n++) { 
		cout << "Class " << n + 1 << '\n' << "Max " << a[n][50] <<
			", Min " << a[n][0] << ", Largest gap " << a[n][51] << '\n';
	}
	return 0;
}
