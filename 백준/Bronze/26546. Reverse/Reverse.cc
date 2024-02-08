#include <iostream>
using namespace std;

int main() {
	bool R = 0; int N, M, L; string S; cin >> N;
	while (N--) {
		cin >> S >> M >> L;
		for (int n = 0; n < S.length(); n++) {
			if (R) {
				if (n < L) { continue; }
				R = 0;
			}
			else if (n == M) { R = 1; continue; }
			cout << S[n];
		}
		cout << '\n';
		R = 0;
	}
	return 0;
}