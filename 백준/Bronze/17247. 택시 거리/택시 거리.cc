#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a[2][2], b = 0, N, M, L; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> L;
			if (L == 1) { a[b][0] = m; a[b][1] = n; b++; };
		}
	}
	cout << abs(a[1][0] - a[0][0]) + abs(a[1][1] - a[0][1]);
	return 0;
}