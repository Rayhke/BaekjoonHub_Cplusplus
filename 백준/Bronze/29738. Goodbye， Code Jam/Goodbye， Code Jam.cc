#include <iostream>
using namespace std;

int R[] = { 4500,1000,25 };
string S[] = { "Round 1", "Round 2", "Round 3", "World Finals" };

int main() {
	int T, P, In; cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> In; P = 0;
		for (int& r : R) {
			if (In > r) { break; }
			P++;
		}
		cout << "Case #" << t << ": " << S[P] << '\n';
	}
	return 0;
}