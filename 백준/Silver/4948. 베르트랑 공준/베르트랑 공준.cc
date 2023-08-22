#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	vector <bool> r(246913, 1);
	int N, M, P = 0;
	for (int n = 2; n * n < 246913; n++) {
		if (r[n]) { for (int m = n * n; m < 246913; m += n) { r[m] = 0; } }
	}
	while (1) {
		cin >> M; if (M == 0) { break; }
		for (int n = M + 1; n < M * 2 + 1; n++) { if (r[n]) { P++; } }
		cout << P << '\n'; P = 0;
	}
	return 0;
}