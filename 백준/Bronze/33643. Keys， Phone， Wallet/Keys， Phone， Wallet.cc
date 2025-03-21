#include <iostream>
using namespace std;

bool R[3];
string S[] = { "keys", "phone", "wallet" };

int main() {
	int N, M = 0; string P; cin >> N;
	while (N--) {
		cin >> P;
		for (int n = 0; n < 3; n++) {
			if (P == S[n]) { R[n] = 1; M++; }
		}
	}
	if (M < 3) {
		for (int n = 0; n < 3; n++) {
			if (!R[n]) { cout << S[n] << '\n'; }
		}
	}
	else {
		cout << "ready";
	}
	return 0;
}