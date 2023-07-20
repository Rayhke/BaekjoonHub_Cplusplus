#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	char C[101][101]; int N, P = 0, X = 0, Y = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cin >> C[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		P = 0;
		for (int m = 0; m < N; m++) {
			if (C[n][m] == '.') { P++; if (P == 2) { X++; } }
			else { P = 0; }
		}
	}
	for (int n = 0; n < N; n++) {
		P = 0;
		for (int m = 0; m < N; m++) {
			if (C[m][n] == '.') { P++; if (P == 2) { Y++; } }
			else { P = 0; }
		}
	}
	cout << X << ' ' << Y;
	return 0;
}
/* ■ 설명 ■

[오답 원인]
*/
