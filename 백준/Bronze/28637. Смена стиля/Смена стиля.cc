#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char C; int N; string S; cin >> N;
	while (N--) {
		cin >> S; C = S[0];
		if (C < 97) { C += 32; }
		cout << C;
		for (int n = 1; n < S.length(); n++) {
			C = S[n];
			if (C < 97) { cout << "_" << (C += 32); }
			else { cout << C; }
		}
		cout << '\n';
	}
	return 0;
}