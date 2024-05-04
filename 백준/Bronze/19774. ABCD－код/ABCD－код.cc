#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T, A, B; string input; cin >> T;
	while (T--) {
		cin >> input; A = 0; B = 0;
		for (int n = 0; n < 2; n++) {
			A *= 10; A += input[n] - 48;
		}
		for (int n = 2; n < 4; n++) {
			B *= 10; B += input[n] - 48;
		}
		A = ((A * A) + (B * B)) % 7;
		if (A != 1) { cout << "NO\n"; }
		else { cout << "YES\n"; }
	}
	return 0;
}