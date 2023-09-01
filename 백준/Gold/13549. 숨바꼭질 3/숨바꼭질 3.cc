#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int U = 1e5 + 1;
vector <int> v(U, U);

int main() {
	int N, K, X; cin >> N >> K; v[N] = 0;
	queue <int> q; q.push(N);
	while (!q.empty()) {
		X = q.front(); q.pop();
		if (X + 1 < U) { if (v[X + 1] > v[X] + 1) { v[X + 1] = v[X] + 1; q.push(X + 1); } }
		if (X - 1 > -1) { if (v[X - 1] > v[X] + 1) { v[X - 1] = v[X] + 1; q.push(X - 1); } }
		if (X * 2 < U) { if (v[X * 2] > v[X]) { v[X * 2] = v[X]; q.push(X * 2); } }
		if (X == K) { break; }
	}
	cout << v[K];
	return 0;
}