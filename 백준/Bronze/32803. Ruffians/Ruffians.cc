#include <iostream>
using namespace std;

int main() {
	bool R; int T, P1[5], P2[5]; cin >> T;
	while (T--) {
		for (int& in : P1) { cin >> in; }
		for (int& in : P2) { cin >> in; }
		R = 0;
		for (int n = 0; n < 5; n++) {
			for (int m = 0; m < 5; m++) {
				if (n == m) { continue; }
				if (P1[n] == P2[m]) { R = 1; break; }
			}
		}
		cout << (R ? "YES\n" : "NO\n");
	}
	return 0;
}