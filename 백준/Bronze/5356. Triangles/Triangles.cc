#include <iostream>
using namespace std;

int main() {
	char C; int T, N; cin >> T;
	while (T--) {
		cin >> N >> C;
		for (int n = 0; n < N; n++) {
			for (int m = 0; m <= n; m++) { cout << C; }
			C = (C + 1 < 91) ? C + 1 : 65;
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}