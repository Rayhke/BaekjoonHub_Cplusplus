#include <iostream>
using namespace std;

int N, M;
bool Use[1001];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	while (1) {
		cin >> N >> M;
		if (N == 0 && M == 0) { break; }
		Use[M] = 1;
		for (int n = 2; n < N; n++) {
			cin >> M; Use[M] = 1;
		}
		for (int n = 1; n <= N; n++) {
			if (!Use[n]) { cout << n; }
		}
		cout << '\n';
		fill(Use, Use + N + 1, 0);
	}
	return 0;
}