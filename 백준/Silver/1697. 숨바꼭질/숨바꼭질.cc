#include <iostream>
#include <queue>
using namespace std;

int w[100001];
bool r[100001];

void B(int N, int K) {
	int S = 1; queue <int> q; q.push(N); w[N] = 0; r[N] = 1;
	while (!q.empty()) {
		int X = q.front(); q.pop();
		if (!r[X + 1] && X + 1 < 100001) { r[X + 1] = 1; w[X + 1] = w[X] + 1; q.push(X + 1); }
		if (!r[X - 1] && X - 1 > - 1) { r[X - 1] = 1; w[X - 1] = w[X] + 1; q.push(X - 1); }
		if (!r[X * 2] && X * 2 < 100001) { r[X * 2] = 1; w[X * 2] = w[X] + 1; q.push(X * 2); }
		if (X == K) { cout << w[X]; break; }
	}
}

int main() {
	int N, K; cin >> N >> K; B(N, K);
	return 0;
}