#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int T, N, M = 0, L = 101; cin >> T;
	while (T--) {
		for (int n = 0; n < 7; n++) {
			cin >> N;
			if (!(N & 1)) { M += N; L = min(N, L); }
		}
		cout << M << ' ' << L << '\n';
		M = 0; L = 101;
	}
	return 0;
}