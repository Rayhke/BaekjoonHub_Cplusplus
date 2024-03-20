#include <iostream>
using namespace std;

bool R[30];

int main() {
	int N, A, B, C; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> A >> B >> C;
		if (A < B && B < C) { R[n] = 1; }
		else if (A > B && B > C) { R[n] = 1; }
	}
	cout << "Gnomes:\n";
	for (int n = 0; n < N; n++) {
		if (R[n]) { cout << "Ordered\n"; }
		else { cout << "Unordered\n"; }
	}
	return 0;
}