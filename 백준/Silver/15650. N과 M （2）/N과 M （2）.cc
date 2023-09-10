#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector <int> v(9, 0);
vector <bool> r(9, 1);

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
	ios::sync_with_stdio(false);
	cin >> N >> M; V(1, 0);
	return 0;
}