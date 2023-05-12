#include <iostream>
using namespace std;

int main() {
	int n, k, m, N = 1, K = 1, M = 1;
	cin >> n >> k;
	m = n - k;
	while (n) { N *= n; n--; }
	while (k) { K *= k; k--; }
	while (m) { M *= m; m--; }
	cout << N / (K * M);
	return 0;
}