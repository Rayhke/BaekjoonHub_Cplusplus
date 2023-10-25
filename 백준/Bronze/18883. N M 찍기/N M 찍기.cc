#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	int N, M, L = 1; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M - 1; m++) { cout << L << ' '; L++; }
		cout << L << '\n'; L++;
	}
	return 0;
}