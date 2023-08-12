#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, P = 1e6, C = -1e6; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> M;
		P = min(P, M); C = max(C, M);
	}
	cout << P << ' ' << C;
	return 0;
}