#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <bool> r(10001, 1); r[1] = 0;
	int N, M, L = 0, P = 10001; cin >> N >> M;
	for (int n = 2; n * n < 10001; n++) {
		if (r[n]) { for (int m = n * n; m < 10001; m += n) { r[m] = 0; } }
	}
	for (int n = N; n <= M; n++) {
		if (r[n]) { L += n; P = min(P, n); }
	}
	if (L != 0) { cout << L << '\n' << P; }
	else { cout << -1; }
	return 0;
}