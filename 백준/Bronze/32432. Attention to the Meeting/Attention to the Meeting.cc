#include <iostream>
using namespace std;

int main() {
	int N, K, P = 1, V; cin >> N >> K;
	if (N == 1) { cout << K; return 0; }
	while (P++) {
		V = P * N + (N - 1);
		if (V > K) { break; }
	}
	cout << P - 1;
	return 0;
}