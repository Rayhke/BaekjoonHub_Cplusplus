#include <iostream>
using namespace std;

int main() {
	int N, M = 0, L = 0, P = 0;
	for (int n = 1; n < 6; n++) {
		for (int m = 0; m < 4; m++) { cin >> N; M += N; }
		if (P < M) { P = M; L = n; }
		M = 0;
	}
	cout << L << ' ' << P;
	return 0;
}