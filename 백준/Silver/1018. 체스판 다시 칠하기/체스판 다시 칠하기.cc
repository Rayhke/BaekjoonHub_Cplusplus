#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool ap = 0; char bp[51][51] = {}, cp[2] = { 'B','W' };
	int x = 0, y = 0, N, M, B = 0, W = 0, O = 0, P = 3000;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> bp[n][m];
		}
	}
	while (1) {
		for (int n = y; n < y + 8; n++) {
			for (int m = x; m < x + 8; m++) {
				if (bp[n][m] != cp[ap]) { B++; }
				else { W++; }
				ap = !ap;
			}
			ap = !ap;
		}
		O = (B < W) ? B : W;
		P = (O < P) ? O : P; B = 0; W = 0; O = 0;
		if (x + 8 < M) { x++; }
		else if (y + 8 < N) { x = 0; y++; }
		else { break; }
	}
	cout << P;
	return 0;
}