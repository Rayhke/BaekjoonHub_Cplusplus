#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, L[10000], P = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) { cin >> L[n]; }
	for (int n = 0; n < N; n++) {
		int U = L[n];
		if (U == M) { P++; continue; }
		for (int m = n + 1; m < N; m++) {
			U += L[m];
			if (U < M) { continue; }
			else {
				if (U == M) { P++; }
				break;
			}
		}
	}
	cout << P;
	return 0;
}