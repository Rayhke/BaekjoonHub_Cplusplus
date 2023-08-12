#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, P = 1e6, C = -1e6; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M;
		P = (M < P) ? M : P; C = (M > C) ? M : C;
	}
	cout << P << ' ' << C;
	return 0;
}
