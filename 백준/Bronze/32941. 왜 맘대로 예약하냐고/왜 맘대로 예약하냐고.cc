#include <iostream>
using namespace std;

bool R[10];

int main() {
	int T, X, N, K, In; cin >> T >> X >> N;
	for (int n = 0; n < N; n++) {
		cin >> K;
		while (K--) {
			cin >> In;
			if (In == X) { R[n] = 1; }
		}
	}
	for (bool& r : R) { N -= r; }
	cout << (N != 0 ? "NO" : "YES");
	return 0;
}