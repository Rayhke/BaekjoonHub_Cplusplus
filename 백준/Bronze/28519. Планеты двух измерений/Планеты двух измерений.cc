#include <iostream>
using namespace std;

int main() {
	long long N, M; cin >> N >> M;
	if (N != M) {
		(N > M) ? cout << M * 2 + 1 : cout << N * 2 + 1;
	}
	else { cout << N + M; }
	return 0;
}