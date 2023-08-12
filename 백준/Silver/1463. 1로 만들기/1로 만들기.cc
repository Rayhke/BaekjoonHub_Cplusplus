#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, M, U = 1e6; cin >> N;
	vector <int> v(N + 1, U); v[N] = 0;
	queue <int> q; q.push(N);
	while (!q.empty()) {
		N = q.front(); q.pop();
		if (N == 1) { break; }
		if (N % 3 == 0) {
			M = N / 3;
			if (v[M] > v[N] + 1) { v[M] = v[N] + 1; q.push(M); }
		}
		if (N % 2 == 0) {
			M = N / 2;
			if (v[M] > v[N] + 1) { v[M] = v[N] + 1; q.push(M); }
		}
		if (N > 0) {
			M = N - 1;
			if (v[M] > v[N] + 1) { v[M] = v[N] + 1; q.push(M); }
		}
	}	
	cout << v[1];
	return 0;
}