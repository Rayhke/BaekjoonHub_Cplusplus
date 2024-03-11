#include <iostream>
using namespace std;

bool R[26];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M; string S; cin >> N;
	while (N--) {
		cin >> S; M = 0;
		for (char C : S) { R[C - 65] = 1; }
		for (int n = 0; n < 26; n++) {
			if (!R[n]) { M += 65 + n; }
		}
		cout << M << '\n';
		fill_n(R, 26, 0);
	}
	return 0;
}