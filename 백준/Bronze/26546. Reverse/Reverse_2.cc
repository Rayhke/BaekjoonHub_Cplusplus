#include <iostream>
using namespace std;

int main() {
	bool R = 0; int N, M, L, P = 0; string S; cin >> N;
	while (N--) {
		cin >> S >> M >> L; L--;
		for (char &C : S) {
			if (R) {
				if (P < L) { P++; continue; }
				R = 0;
			}
			else if (P == M) { R = 1; continue; }
			cout << C; P++;
		}
		cout << '\n';
		R = 0; P = 0;
	}
	return 0;
}
