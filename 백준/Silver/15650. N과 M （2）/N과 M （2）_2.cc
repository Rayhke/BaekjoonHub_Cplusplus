#include <iostream>
using namespace std;

bool r[9];
int N, M, v[8];

void V(int W, int P) {
	if (P == M) {
		for (int n = 0; n < M; n++) { cout << v[n] << ' '; }
		cout << '\n'; return;
	}
	for (int n = W; n <= N; n++) {
		if (r[n]) {
			r[n] = 0; v[P] = n;
			V(n + 1, P + 1); r[n] = 1;
		}
	}
}

int main() {
	for (int n = 1; n < 9; n++) { r[n] = 1; }
	cin >> N >> M; V(1, 0);
	return 0;
}
