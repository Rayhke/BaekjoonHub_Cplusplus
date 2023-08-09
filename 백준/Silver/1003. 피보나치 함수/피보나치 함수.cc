#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, V[41] = { 1,1 }; cin >> N;
	for (int n = 2; n < 41; n++) { V[n] = V[n - 1] + V[n - 2]; }
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M > 1) { cout << V[M - 2] << ' ' << V[M - 1] << '\n'; }
		else if (M & 1) { cout << 0 << ' ' << 1 << '\n'; }
		else { cout << 1 << ' ' << 0 << '\n'; }
	}
	return 0;
}