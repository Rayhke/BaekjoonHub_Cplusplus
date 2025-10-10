#include <iostream>
using namespace std;

bool T[22];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char S[7]; int N, M, In; cin >> N;
	while (N--) {
		cin >> S; M = S[0] + S[1] - 197;
		if (M < 8 || 13 < M) {
			cin >> In;
			if (M < 1) { T[In] = 1; }
			else if (M < 7) { cout << T[In] << '\n'; }
			else if (M < 19) { T[In] = 0; }
			else { T[In] = !T[In]; }
		}
		else {
			T[21] = M == 8;
			fill(T + 1, T + 21, T[21]);
		}
	}
	return 0;
}