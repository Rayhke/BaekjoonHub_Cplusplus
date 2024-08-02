#include <iostream>
using namespace std;

int N, M, Arr[8];

void Backtracking(int count, int now) {
	if (count == M) {
		for (int n = 0; n < M; n++) { cout << Arr[n] << ' '; }
		cout << '\n';
		return;
	}
	for (int n = now; n <= N; n++) {
		Arr[count] = n;
		Backtracking(count + 1, n);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> M; Backtracking(0, 1);
	return 0;
}